#pragma once
#include <iostream>
#include <string>

enum class MONSTER_TYPE
{
	MONSTER_PLAYER,		// Player
	MONSTER_SLIME,		// Slime
	MONSTER_GOBLIN,		// Goblin
	MONSTER_MAX			// Monster Type Max
};

enum class CHARACTER_TYPE
{
	CHARACTER_PLAYER,	// Player
	CHARACTER_MONSTER,	// Monster
	CHARACTER_MAX		// Character Type Max
};

enum class COMMAND_TYPE
{
	COMMAND_FIGHT,
	COMMAND_SPELL,
	COMMAND_RUN,
	COMMAND_MAX
};

struct Character
{
	int hp = 0;
	int maxHp = 0;
	int mp = 0;
	int maxMp = 0;
	char name[13]{}; // 12 + null character
	char aa[256]{};
	COMMAND_TYPE command = COMMAND_TYPE::COMMAND_MAX;
};