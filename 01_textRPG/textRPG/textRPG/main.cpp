#pragma once
#include "GameManager.h"

int main()
{
	gameManager gm;
	gm.Init();
	gm.Battle();
	gm.DrawBattleScreen();

	return 0;
}
