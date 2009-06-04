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

#ifndef PLAYEROBJECTMESSAGE9_H_
#define PLAYEROBJECTMESSAGE9_H_

#include "../BaseLineMessage.h"

#include "../../objects/player/PlayerObjectImplementation.h"

#include "../../objects/draftschematic/DraftSchematic.h"

class PlayerObjectMessage9 : public BaseLineMessage {
public:
	PlayerObjectMessage9(PlayerObjectImplementation* player)
			: BaseLineMessage(player->getObjectID(), 0x504C4159, 9, 0x13) {
		// certifications && skills
		insertSkills(player);

		// crafting states
		insertInt(0);
		insertInt(0);

		// Nearest crafting station
		insertLong(0);

		// datapad draft schematics
		insertDraftSchematics(player);

		// crafting?
		insertInt(0);

		// species data - what is this
		insertInt(0);

		// friends list
		insertInt(0); //List size
		insertInt(0); //Update Counter

		// ignore list
		insertInt(0); //List Size
		insertInt(0); //Update Counter

		// language
		insertInt(player->getLanguage());

		// stomach fillings
		insertInt(player->getFoodFilling());
		insertInt(player->getFoodFillingMax());
		insertInt(player->getDrinkFilling());
		insertInt(player->getDrinkFillingMax());

		//
		insertInt(0);
		insertInt(0);

		// waypoint list? ... Waypoints are sent in PLAY8
		insertInt(0);
		insertInt(0);

		// jedi state
		insertInt(player->getJediState());

		setSize();
	}

	void insertDraftSchematics(PlayerObjectImplementation* play) {
		//uint32 dsListSize = play->player->getDraftSchematicMapSize();
		//uint32 dsUpdateCount = play->player->getDraftSchematicUpdateCount(0);

		//insertInt(dsListSize);
		//insertInt(dsUpdateCount);
		//TODO: Temp
		insertInt(0);
		insertInt(0);

		//for (int i = 0; i < dsListSize; i++) {
			//insertLong(play->player->getDraftSchematic(i)->getObjectID());
			//insertInt(play->player->getDraftSchematicByIndex(i)->getSchematicID());
			//insertInt(play->player->getDraftSchematicByIndex(i)->getObjectCRC());
		//}
	}

	void insertSkills(PlayerObjectImplementation* play) {
		int size = play->player->getSkillAndCertificationSize();

		insertInt(size);
		insertInt(play->player->getCreatureSkillsCount());

		for (int i = 0; i < size; ++i) {
			insertAscii(play->player->getSkillOrCertification(i));
		}
	}

};

#endif /*PLAYEROBJECTMESSAGE9_H_*/
