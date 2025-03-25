#pragma once
#include "CommonType.h"

class gameManager
{
public:
	gameManager();

	void Init();
	void Battle();
	void DrawBattleScreen();

private:
	Character mCharacters[static_cast<int>(CHARACTER_TYPE::CHARACTER_MAX)]{};
};
