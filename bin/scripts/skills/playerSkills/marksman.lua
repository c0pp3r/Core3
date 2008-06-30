--Copyright (C) 2007 <SWGEmu>
 
--This File is part of Core3.
 
--This program is free software; you can redistribute 
--it and/or modify it under the terms of the GNU Lesser 
--General Public License as published by the Free Software
--Foundation; either version 2 of the License, 
--or (at your option) any later version.
 
--This program is distributed in the hope that it will be useful, 
--but WITHOUT ANY WARRANTY; without even the implied warranty of 
--MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
--See the GNU Lesser General Public License for
--more details.
 
--You should have received a copy of the GNU Lesser General 
--Public License along with this program; if not, write to
--the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 
--Linking Engine3 statically or dynamically with other modules 
--is making a combined work based on Engine3. 
--Thus, the terms and conditions of the GNU Lesser General Public License 
--cover the whole combination.
 
--In addition, as a special exception, the copyright holders of Engine3 
--give you permission to combine Engine3 program with free software 
--programs or libraries that are released under the GNU LGPL and with 
--code included in the standard release of Core3 under the GNU LGPL 
--license (or modified versions of such code, with unchanged license). 
--You may copy and distribute such a system following the terms of the 
--GNU LGPL for Engine3 and the licenses of the other code concerned, 
--provided that you include the source code of that other code when 
--and as the GNU LGPL requires distribution of source code.
 
--Note that people who make modified versions of Engine3 are not obligated 
--to grant this special exception for their modified versions; 
--it is their choice whether to do so. The GNU Lesser General Public License 
--gives permission to release a modified version without this exception; 
--this exception also makes it possible to release a modified version 
--which carries forward this exception.
-------------------------------NOVICE----------------------------------

RandPoolAtt = { 
	attackname = "overchargeshot1",
	animation = "fire_1_special_single_medium",

	requiredWeaponType = RANGED,
	
	range = 65,
	damageRatio = 2.25,
	speedRatio = 2.0,
	areaRange = 0,
	accuracyBonus = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	postureUpChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "overchargeshot_block",
	CbtSpamCounter = "overchargeshot_counter",
	CbtSpamEvade = "overchargeshot_evade",
	CbtSpamHit = "overchargeshot_hit",
	CbtSpamMiss = "overchargeshot_miss",
}

AddRandomPoolAttackTargetSkill(RandPoolAtt)

-----------------------------------------------------------------------

RandPoolAtt = { 
	attackname = "pointblankarea1",
	animation = "fire_area_no_trails_light",

	requiredWeaponType = RANGED,
	
	range = 65,
	damageRatio = 1.5,
	speedRatio = 1.05,
	coneAngle = 60,
	accuracyBonus = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	postureUpChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "coveringfire_block",
	CbtSpamCounter = "coveringfire_counter",
	CbtSpamEvade = "coveringfire_evade",
	CbtSpamHit = "coveringfire_hit",
	CbtSpamMiss = "coveringfire_miss",
}

AddRandomPoolAttackTargetSkill(RandPoolAtt)

-----------------------------------------------------------------------

RandPoolAtt = { 
	attackname = "pointblanksingle1",
	animation = "fire_3_single_medium",

	requiredWeaponType = RANGED,
	
	range = 65,
	damageRatio = 1.75,
	speedRatio = 1.05,
	areaRange = 0,
	accuracyBonus = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	postureUpChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "semiautoattack_block",
	CbtSpamCounter = "semiautoattack_counter",
	CbtSpamEvade = "semiautoattack_evade",
	CbtSpamHit = "semiautoattack_hit",
	CbtSpamMiss = "semiautoattack_miss",
}

AddRandomPoolAttackTargetSkill(RandPoolAtt)


-------------------------------RIFLES-------------------------------

DirectPoolAtt = { 
	attackname = "headshot1",
	animation = "fire_1_special_single_medium_face",

	requiredWeaponType = RIFLE,
	
	range = 65,
	damageRatio = 1.15,
	speedRatio = 1.05,
	areaRange = 0,
	accuracyBonus = 0,

	healthAttackChance = 0,
	strengthAttackChance = 0,
	constitutionAttackChance = 0,

	actionAttackChance = 0,
	quicknessAttackChance = 0,
	staminaAttackChance = 0,

	mindAttackChance = 100,
	focusAttackChance = 0,
	willpowerAttackChance = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "headshot_block",
	CbtSpamCounter = "headshot_counter",
	CbtSpamEvade = "headshot_evade",
	CbtSpamHit = "headshot_hit",
	CbtSpamMiss = "headshot_miss",
}

AddDirectPoolAttackTargetSkill(DirectPoolAtt)

-----------------------------------------------------------------------

DirectPoolAtt = { 
	attackname = "headshot2",
	animation = "fire_1_special_single_medium_face",

	requiredWeaponType = RIFLE,
	
	range = 65,
	damageRatio = 1.70,
	speedRatio = 1.20,
	areaRange = 0,
	accuracyBonus = 0,

	healthAttackChance = 0,
	strengthAttackChance = 0,
	constitutionAttackChance = 0,

	actionAttackChance = 0,
	quicknessAttackChance = 0,
	staminaAttackChance = 0,

	mindAttackChance = 100,
	focusAttackChance = 0,
	willpowerAttackChance = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "expertheadshot_block",
	CbtSpamCounter = "expertheadshot_counter",
	CbtSpamEvade = "expertheadshot_evade",
	CbtSpamHit = "expertheadshot_hit",
	CbtSpamMiss = "expertheadshot_miss",
}

AddDirectPoolAttackTargetSkill(DirectPoolAtt)

-----------------------------------------------------------------------

DotPoolAtt = { 
	attackname = "mindshot1",
	animation = "fire_1_special_single_medium_face",

	requiredWeaponType = RIFLE,
	
	range = 65,
	damageRatio = 1.50,
	speedRatio = 1.20,
	areaRange = 0,
	accuracyBonus = 0,

	healthAttackChance = 0,
	strengthAttackChance = 0,
	constitutionAttackChance = 0,

	actionAttackChance = 0,
	quicknessAttackChance = 0,
	staminaAttackChance = 0,

	mindAttackChance = 100,
	focusAttackChance = 0,
	willpowerAttackChance = 0,
		
	dotChance = 30,
	tickStrengthOfHit = 1,

	fireStrength = 0,
	fireType = 0,

	bleedingStrength = 0,
	bleedingType = MIND,

	poisonStrength = 0,
	poisonType = 0,

	diseaseStrength = 0,
	diseaseType = 0,
	
	CbtSpamBlock = "headshot_block",
	CbtSpamCounter = "headshot_counter",
	CbtSpamEvade = "headshot_evade",
	CbtSpamHit = "headshot_hit",
	CbtSpamMiss = "headshot_miss",
}

AddDotPoolAttackTargetSkill(DotPoolAtt)

------------------------------PISTOLS-------------------------------

DirectPoolAtt = { 
	attackname = "bodyshot1",
	animation = "fire_1_special_single_light",

	requiredWeaponType = PISTOL,
	
	range = 32,
	damageRatio = 1.15,
	speedRatio = 1.20,
	areaRange = 0,
	accuracyBonus = 0,

	healthAttackChance = 100,
	strengthAttackChance = 0,
	constitutionAttackChance = 0,

	actionAttackChance = 0,
	quicknessAttackChance = 0,
	staminaAttackChance = 0,

	mindAttackChance = 0,
	focusAttackChance = 0,
	willpowerAttackChance = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "bodyshot_block",
	CbtSpamCounter = "bodyshot_counter",
	CbtSpamEvade = "bodyshot_evade",
	CbtSpamHit = "bodyshot_hit",
	CbtSpamMiss = "bodyshot_miss",
}

AddDirectPoolAttackTargetSkill(DirectPoolAtt)

-------------------------------------------------------------------

DirectPoolAtt = { 
	attackname = "bodyshot2",
	animation = "fire_1_special_single_light",

	requiredWeaponType = PISTOL,
	
	range = 32,
	damageRatio = 2.1,
	speedRatio = 1.8,
	areaRange = 0,
	accuracyBonus = 0,

	healthAttackChance = 100,
	strengthAttackChance = 0,
	constitutionAttackChance = 0,

	actionAttackChance = 0,
	quicknessAttackChance = 0,
	staminaAttackChance = 0,

	mindAttackChance = 0,
	focusAttackChance = 0,
	willpowerAttackChance = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "bodyshot_block",
	CbtSpamCounter = "bodyshot_counter",
	CbtSpamEvade = "bodyshot_evade",
	CbtSpamHit = "bodyshot_hit",
	CbtSpamMiss = "bodyshot_miss",
}

AddDirectPoolAttackTargetSkill(DirectPoolAtt)

-----------------------------------------------------------------------

DotPoolAtt = { 
	attackname = "healthshot1",
	animation = "fire_1_special_single_light",

	requiredWeaponType = PISTOL,
	
	range = 32,
	damageRatio = 1.25,
	speedRatio = 1.25,
	areaRange = 0,
	accuracyBonus = 0,

	healthAttackChance = 100,
	strengthAttackChance = 0,
	constitutionAttackChance = 0,

	actionAttackChance = 0,
	quicknessAttackChance = 0,
	staminaAttackChance = 0,

	mindAttackChance = 0,
	focusAttackChance = 0,
	willpowerAttackChance = 0,
		
	dotChance = 30,
	tickStrengthOfHit = 1,

	fireStrength = 0,
	fireType = 0,

	bleedingStrength = 0,
	bleedingType = HEALTH,

	poisonStrength = 0,
	poisonType = 0,

	diseaseStrength = 0,
	diseaseType = 0,
	
	CbtSpamBlock = "sapshot_block",
	CbtSpamCounter = "sapshot_counter",
	CbtSpamEvade = "sapshot_evade",
	CbtSpamHit = "sapshot_hit",
	CbtSpamMiss = "sapshot_miss",
}

AddDotPoolAttackTargetSkill(DotPoolAtt)

----------------------------CARBINES--------------------------------

DirectPoolAtt = { 
	attackname = "legshot1",
	animation = "test_homing",

	requiredWeaponType = CARBINE,
	
	range = 50,
	damageRatio = 1.15,
	speedRatio = 1.05,
	areaRange = 0,
	accuracyBonus = 0,

	healthAttackChance = 0,
	strengthAttackChance = 0,
	constitutionAttackChance = 0,

	actionAttackChance = 100,
	quicknessAttackChance = 0,
	staminaAttackChance = 0,

	mindAttackChance = 0,
	focusAttackChance = 0,
	willpowerAttackChance = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "legshot_block",
	CbtSpamCounter = "legshot_counter",
	CbtSpamEvade = "legshot_evade",
	CbtSpamHit = "legshot_hit",
	CbtSpamMiss = "legshot_miss",
}

AddDirectPoolAttackTargetSkill(DirectPoolAtt)

-----------------------------------------------------------------------

RandPoolAtt = { 
	attackname = "fullautosingle1",
	animation = "fire_5_special_single_medium",

	requiredWeaponType = CARBINE,
	
	range = 50,
	damageRatio = 1.35,
	speedRatio = 1.15,
	areaRange = 0,
	accuracyBonus = 0,
		
	healthAttackChance = 30,
	strengthAttackChance = 0,
	constitutionAttackChance = 0,

	actionAttackChance = 50,
	quicknessAttackChance = 0,
	staminaAttackChance = 0,

	mindAttackChance = 5,
	focusAttackChance = 0,
	willpowerAttackChance = 0,	

	knockdownChance = 0,
	postureDownChance = 0,
	postureUpChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "multishot_block",
	CbtSpamCounter = "multishot_counter",
	CbtSpamEvade = "multishot_evade",
	CbtSpamHit = "multishot_hit",
	CbtSpamMiss = "multishot_miss",
}

AddRandomPoolAttackTargetSkill(RandPoolAtt)

---------------------------------------------------------------------------

DirectPoolAtt = { 
	attackname = "legshot2",
	animation = "test_homing",

	requiredWeaponType = CARBINE,
	
	range = 50,
	damageRatio = 2.5,
	speedRatio = 1.5,
	areaRange = 0,
	accuracyBonus = 0,

	healthAttackChance = 0,
	strengthAttackChance = 0,
	constitutionAttackChance = 0,

	actionAttackChance = 100,
	quicknessAttackChance = 0,
	staminaAttackChance = 0,

	mindAttackChance = 0,
	focusAttackChance = 0,
	willpowerAttackChance = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "legshot_block",
	CbtSpamCounter = "legshot_counter",
	CbtSpamEvade = "legshot_evade",
	CbtSpamHit = "legshot_hit",
	CbtSpamMiss = "legshot_miss",
}

AddDirectPoolAttackTargetSkill(DirectPoolAtt)

-----------------------------------------------------------------------

DotPoolAtt = { 
	attackname = "actionshot1",
	animation = "fire_3_single_light",

	requiredWeaponType = CARBINE,
	
	range = 50,
	damageRatio = 1.5,
	speedRatio = 1.6,
	areaRange = 0,
	accuracyBonus = 0,

	healthAttackChance = 0,
	actionAttackChance = 100,
	mindAttackChance = 0,

	dotChance = 30,
	tickStrengthOfHit = 1,

	fireStrength = 0,
	fireType = 0,

	bleedingStrength = 0,
	bleedingType = ACTION,

	poisonStrength = 0,
	poisonType = 0,

	diseaseStrength = 0,
	diseaseType = 0,
	
	CbtSpamBlock = "kneecapshot_block",
	CbtSpamCounter = "kneecapshot_counter",
	CbtSpamEvade = "kneecapshot_evade",
	CbtSpamHit = "kneecapshot_hit",
	CbtSpamMiss = "kneecapshot_miss",
}

AddDotPoolAttackTargetSkill(DotPoolAtt)

------------------------------RANGEDANDSUPPORT---------------------------------

RandPoolAtt = { 
	attackname = "threatenshot",
	animation = "fire_1_special_single_light_face",

	requiredWeaponType = RANGED,
	
	range = 65,
	damageRatio = 1.15,
	speedRatio = 1.05,
	areaRange = 0,
	accuracyBonus = 0,
	postureUpChance = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "threatenshot_block",
	CbtSpamCounter = "threatenshot_counter",
	CbtSpamEvade = "threatenshot_evade",
	CbtSpamHit = "threatenshot_hit",
	CbtSpamMiss = "threatenshot_miss",
}

AddRandomPoolAttackTargetSkill(RandPoolAtt)

-----------------------------------------------------------------------

ChangePost = {
	skillname = "tumbletokneeling",
	animation = "tumble_to_kneeling",

	posture = CROUCHED_POSTURE,

	speed = 1.0,
	damageRatio = 1.0,
}

AddChangePostureSelfSkill(ChangePost)

-----------------------------------------------------------------------

ChangePost = {
	skillname = "tumbletoprone",
	animation = "tumble_to_prone",

	posture = PRONE_POSTURE,

	speed = 1.0,
}

AddChangePostureSelfSkill(ChangePost)

-----------------------------------------------------------------------

ChangePost = {
	skillname = "tumbletostanding",
	animation = "tumble_to_standing",

	posture = UPRIGHT_POSTURE,

	speed = 1.0,
}

AddChangePostureSelfSkill(ChangePost)

-----------------------------------------------------------------------

RandPoolAtt = { 
	attackname = "warningshot",
	animation = "fire_area_light",

	requiredWeaponType = RANGED,
	
	range = 65,
	damageRatio = 1.15,
	speedRatio = 1.05,
	areaRange = 0,
	accuracyBonus = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	postureUpChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "warningshot_block",
	CbtSpamCounter = "warningshot_counter",
	CbtSpamEvade = "warningshot_evade",
	CbtSpamHit = "warningshot_hit",
	CbtSpamMiss = "warningshot_miss",
}

AddRandomPoolAttackTargetSkill(RandPoolAtt)

-----------------------------------------------------------------------

RandPoolAtt = { 
	attackname = "suppressionfire1",
	animation = "fire_area_light",

	requiredWeaponType = RANGED,
	
	range = 65,
	damageRatio = 2.3,
	speedRatio = 2.0,
	areaRange = 0,
	accuracyBonus = 0,
		
	knockdownChance = 0,
	postureDownChance = 20,
	postureUpChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "suppressionfire_block",
	CbtSpamCounter = "suppressionfire_counter",
	CbtSpamEvade = "suppressionfire_evade",
	CbtSpamHit = "suppressionfire_hit",
	CbtSpamMiss = "suppressionfire_miss",
}

AddRandomPoolAttackTargetSkill(RandPoolAtt)

--------------------------------MASTER----------------------------------

RandPoolAtt = { 
	attackname = "overchargeshot2",
	animation = "fire_1_special_single_medium",

	requiredWeaponType = RANGED,
	
	range = 65,
	damageRatio = 5.0,
	speedRatio = 2.0,
	areaRange = 0,
	accuracyBonus = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	postureUpChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "fullchargeshot_block",
	CbtSpamCounter = "fullchargeshot_counter",
	CbtSpamEvade = "fullchargeshot_evade",
	CbtSpamHit = "fullchargeshot_hit",
	CbtSpamMiss = "fullchargeshot_miss",
}

AddRandomPoolAttackTargetSkill(RandPoolAtt)




