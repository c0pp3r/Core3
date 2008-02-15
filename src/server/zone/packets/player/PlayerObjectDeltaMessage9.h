/*
Copyright (C) 2007 <SWGEmu>
 
This File is part of Core3.
 
This program is free software; you can redistribute 
it and/or modify it under the terms of the GNU Lesser 
General Public License as published by the Free Software
Foundation; either version 2 of the License, 
or (at your option) any later version.
 
This program is distributed in the hope that it will be useful, 
but WITHOUT ANY WARRANTY; without even the implied warranty of 
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
See the GNU Lesser General Public License for
more details.
 
You should have received a copy of the GNU Lesser General 
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 
Linking Engine3 statically or dynamically with other modules 
is making a combined work based on Engine3. 
Thus, the terms and conditions of the GNU Lesser General Public License 
cover the whole combination.
 
In addition, as a special exception, the copyright holders of Engine3 
give you permission to combine Engine3 program with free software 
programs or libraries that are released under the GNU LGPL and with 
code included in the standard release of Core3 under the GNU LGPL 
license (or modified versions of such code, with unchanged license). 
You may copy and distribute such a system following the terms of the 
GNU LGPL for Engine3 and the licenses of the other code concerned, 
provided that you include the source code of that other code when 
and as the GNU LGPL requires distribution of source code.
 
Note that people who make modified versions of Engine3 are not obligated 
to grant this special exception for their modified versions; 
it is their choice whether to do so. The GNU Lesser General Public License 
gives permission to release a modified version without this exception; 
this exception also makes it possible to release a modified version 
which carries forward this exception.
*/

#ifndef PLAYEROBJECTDELTAMESSAGE9_H_
#define PLAYEROBJECTDELTAMESSAGE9_H_

#include "../DeltaMessage.h"

#include "../../objects/player/PlayerObject.h"
#include "../../objects/player/Player.h"

#include "../../objects/draftschematic/DraftSchematic.h"

class PlayerObjectDeltaMessage9 : public DeltaMessage {
	PlayerObject* play;
	
public:
	PlayerObjectDeltaMessage9(PlayerObject* pl)
			: DeltaMessage(pl->getObjectID(), 0x504C4159, 9) {
		play = pl;
	}

	void startSkillListUpdate(int skillsToUpdate) {
		startUpdate(0);
		startList(skillsToUpdate, play->getPlayer()->getNewCreatureSkillsCount(skillsToUpdate));
	}
	
	void addSkill(const string& name) {
		insertByte(1);
		insertShort(0);
		insertAscii(name.c_str());
	}
	
	void setCraftingState(int state) {
		startUpdate(2);
		insertInt(state);
	}
		
	void updateDraftSchematics() {
		Player* player = play->getPlayer();
		int schematicSize = player->getDraftSchematicListSize();
		startUpdate(4);

		startList(schematicSize + 1, player->getDraftSchematicUpdateCount(schematicSize + 1));

		// This deletes all the draft schematics on the client
		insertByte(3);
		insertShort(0);

		for (int i = 0; i < schematicSize; i++) {
			insertByte(1);
			insertShort(i+1);
			insertInt(player->getDraftSchematic(i)->getSchematicCRC());
			insertInt(player->getDraftSchematic(i)->getSchematicID());
		}
	}
		
	void updateSkilsAndCertifications() {
		Player* player = play->getPlayer();
		
		int certSize = player->getCertificationListSize();
		int skillsSize = player->getCreatureSkillsSize();
		
		startUpdate(0);
		startList(certSize + skillsSize + 1, player->getNewCreatureSkillsCount(certSize + skillsSize + 1));
		
		insertByte(3);
		
		insertShort(certSize + skillsSize);
		for (int i = 0; i < skillsSize; i++) {
			insertAscii(player->getSkill(i));
		}
				
		for (int i = 0; i < certSize; i++)
			insertAscii(player->getCertification(i));
	}
	
	void updateFoodCurrent() {
		addIntUpdate(0x0A, 100);
	}
	
};

#endif /*PLAYEROBJECTDELTAMESSAGE9_H_*/
