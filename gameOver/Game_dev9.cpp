//#include<iostream>
//#include<string>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL,"Russian");
//
//	int secNumber = rand() % 100 + 1;
//	int tries = 0;
//	int guess;
//	cout << "Добро пожаловать в Игру"<< endl;
//	do
//	{
//		cout << "Ввести число"<<endl;
//		cin >> guess;
//		++tries;
//		if (guess > secNumber)
//		{
//			cout << "Число меньше" << endl;
//		}
//		else if (guess < secNumber)
//		{
//			cout << "Число больше" << endl;
//		}
//		else
//		{
//			cout << "Количество повыток: " <<tries <<endl;
//		}
//	} while (guess != secNumber);
//	system("pause");
//	return 0;
//}