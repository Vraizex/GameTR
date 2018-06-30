#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "Ðåêîðä:" << score << endl;
	enum difficulty {NOVICE, EASY, NORMAL,HARD, UNBEARABLE};
	difficulty myDifficulty = EASY;
	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
	shipCost myShipCost = BOMBER_COST;
	cout << "îáíîâèòü êîðàáëü äëÿ ïîáåäû  " <<(CRUISER_COST - myShipCost) << "  Ïîëó÷åííûå î÷êè.\n" ;
	system("pause");
	return 0;

}
