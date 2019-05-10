#include "game_manager.h"

using namespace std;

int main()
{
	game_manager game1 = game_manager();
	game1.add_team_A_goalkeeper(100, 10, 20, 65);
	game1.add_team_A_defender(100, 20, 60, 80);
	game1.add_team_A_striker(100, 70, 50, 30);
	game1.add_team_B_goalkeeper(100, 50, 20, 10);
	game1.add_team_B_defender(100, 85, 50, 90);
	game1.add_team_B_striker(100, 50, 40, 50);
	game1.play();
	cout << game1.get_result();
	


	game_manager game2 = game_manager();
	game2.add_team_A_goalkeeper(100, 10, 20, 59);
	game2.add_team_A_defender(100, 20, 60, 70);
	game2.add_team_A_striker(100, 90, 50, 30);
	game2.add_team_B_goalkeeper(100, 50, 40, 50);
	game2.add_team_B_defender(100, 60, 60, 90);
	game2.add_team_B_striker(100, 90, 20, 15);
	game2.play();
	cout << game2.get_result();


}