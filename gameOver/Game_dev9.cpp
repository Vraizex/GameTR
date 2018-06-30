#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Russian");

	int secNumber = rand() % 100 + 1;
	int tries = 0;
	int guess;
	cout << "Äîáðî ïîæàëîâàòü â Èãðó"<< endl;
	do
	{
		cout << "Ââåñòè ÷èñëî"<<endl;
		cin >> guess;
		++tries;
		if (guess > secNumber)
		{
			cout << "×èñëî ìåíüøå" << endl;
		}
		else if (guess < secNumber)
		{
			cout << "×èñëî áîëüøå" << endl;
		}
		else
		{
			cout << "Êîëè÷åñòâî ïîâûòîê: " <<tries <<endl;
		}
	} while (guess != secNumber);
	system("pause");
	return 0;
}
