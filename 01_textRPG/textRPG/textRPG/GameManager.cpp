#include "GameManager.h"

Character g_monsters[static_cast<int>(MONSTER_TYPE::MONSTER_MAX)] =
{
	{ 15, 15, 15, 15, "ฟ๋ป็", },	// Player
};

Character g_characters[static_cast<int>(CHARACTER_TYPE::CHARACTER_MAX)] =
{
};

gameManager::gameManager()
{
}

void gameManager::Init()
{
	mCharacters[static_cast<int>(CHARACTER_TYPE::CHARACTER_PLAYER)] = g_monsters[static_cast<int>(MONSTER_TYPE::MONSTER_PLAYER)];
}

// Display of battle
void gameManager::Battle()
{
	// _getch();
	std::string orderString;
	std::cin >> orderString;
}

void gameManager::DrawBattleScreen()
{
	std::cout << mCharacters[static_cast<int>(CHARACTER_TYPE::CHARACTER_PLAYER)].name << std::endl;
	std::cout << "HP: " << mCharacters[static_cast<int>(CHARACTER_TYPE::CHARACTER_PLAYER)].hp
		<< " / " << mCharacters[static_cast<int>(CHARACTER_TYPE::CHARACTER_PLAYER)].maxHp
		<< "  MP: " << mCharacters[static_cast<int>(CHARACTER_TYPE::CHARACTER_PLAYER)].mp
		<< " / " << mCharacters[static_cast<int>(CHARACTER_TYPE::CHARACTER_PLAYER)].maxMp
		<< std::endl;
}
