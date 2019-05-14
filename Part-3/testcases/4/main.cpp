#include <iostream>
#include "game_manager.h"

using namespace std;

int main()
{
	game_manager game = game_manager();
	game.add_team_A_goalkeeper(100, 10, 20, 59);
	game.add_team_A_defender(100, 20, 60, 80);
	game.add_team_A_striker(100, 90, 50, 70);
	game.add_team_B_goalkeeper(100, 50, 60, 60);
	game.add_team_B_defender(100, 60, 60, 70);
	game.add_team_B_striker(100, 90, 20, 50);
	game.play();
	cout << game.get_result();
}