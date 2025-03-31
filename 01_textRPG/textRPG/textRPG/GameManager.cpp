#include "GameManager.h"

Character g_monsters[static_cast<int>(MONSTER_TYPE::MONSTER_MAX)] =
{
	{ 15, 15, 15, 15, "용사", },	// Player
	{ 10, 10, 10, 10, "슬라임", "／・Д・＼\n""～～～～～" },	// Slime
	{ 20, 20, 20, 20, "고블린", },	// Goblin
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
	std::cout << mCharacters[static_cast<int>(CHARACTER_TYPE::CHARACTER_MONSTER)].name << "이(가) 나타났다." << std::endl;

	while (true)
	{
		for (int i = 0; i < static_cast<int>(CHARACTER_TYPE::CHARACTER_MAX); ++i)
		{
			DrawBattleScreen();
			switch (mCharacters[i].command)
			{
			case COMMAND_TYPE::COMMAND_FIGHT:
				std::cout << mCharacters[i].name << "이(가) 공격했다." << std::endl;
				break;
			case COMMAND_TYPE::COMMAND_SPELL:
				std::cout << mCharacters[i].name << "이(가) 주문을 외웠다." << std::endl;
				break;
			case COMMAND_TYPE::COMMAND_RUN:
				break;
			case COMMAND_TYPE::COMMAND_MAX:
			default:
				break;
			}
		}
	}
}

void gameManager::DrawBattleScreen()
{
	system("cls");
	std::cout << mCharacters[static_cast<int>(CHARACTER_TYPE::CHARACTER_PLAYER)].name << std::endl;
	std::cout << "HP: " << mCharacters[static_cast<int>(CHARACTER_TYPE::CHARACTER_PLAYER)].hp
		<< " / " << mCharacters[static_cast<int>(CHARACTER_TYPE::CHARACTER_PLAYER)].maxHp
		<< "  MP: " << mCharacters[static_cast<int>(CHARACTER_TYPE::CHARACTER_PLAYER)].mp
		<< " / " << mCharacters[static_cast<int>(CHARACTER_TYPE::CHARACTER_PLAYER)].maxMp
		<< std::endl;

	std::cout << "======================" << std::endl;

}
