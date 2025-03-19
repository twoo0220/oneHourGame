#pragma once

struct Character
{
	int hp = 0;
	int maxHp = 0;
	int mp = 0;
	int maxMp = 0;
	char name[13]{}; // 12 + null character
};

enum class MONSTER_TYPE
{
	MONSTER_PLAYER,		// Player
	MONSTER_MAX			// Monster Type Max
};

enum class CHARACTER_TYPE
{
	CHARACTER_PLAYER,	// Player
	CHARACTER_MONSTER,	// Monster
	CHARACTER_MAX		// Character Type Max
};

Character monsters[static_cast<int>(MONSTER_TYPE::MONSTER_MAX)] =
{
	{ 15, 15, 15, 15, "���" },	// Player
};

Character characters[static_cast<int>(CHARACTER_TYPE::CHARACTER_MAX)] =
{
	{ 15, 15, 15, 15, "������" },	// Slime
	{ 15, 15, 15, 15, "���" },	// Goblin
};
