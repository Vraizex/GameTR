#include <iostream>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	system("pause");
	string word1 = "Game";
	string word2("Over");
	string word3(3,'!');
	string phrase = word1 + " " + word2 + word3;
	cout << "phrase" << phrase << "\n\n";
	cout << "phrase" << phrase.size() << "\n\n";
	cout << "phrase" << phrase[0] << "\n\n";
	cout << "phrase";
	phrase[0] = 'L';
	cout << "phrase" << phrase << "\n\n";
	for (unsigned int i = 0; i < phrase.size(); ++i)
	{
		cout << "phrase" << i <<" "<< phrase[i] << "\n\n";
	}
	cout << "phrase" << phrase.find("OVER") << "\n\n";
	if (phrase.find("eggplant") == string::npos)
	{
		cout << "'eggplant' fgjhdgjdj" << "\n\n";
	}
	phrase.erase(4, 5);
	cout << "phrase" << phrase << "\n\n";
	phrase.erase(4);
	cout << "phrase" << phrase << "\n\n";
	phrase.erase();
	cout << "phrase" << phrase << "\n\n";
	if (phrase.empty())
	{
		cout << "phrase" << "\n\n";
	}
	system("pause");
	return 0;
}

