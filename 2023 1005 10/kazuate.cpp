#include <iostream>
#include <cstdlib>
#include <ctime>
#include"kazuate.h"
using namespace std;

int answer = 0;
int question = 0;

void inoutput()
{
	cout << "1〜10の整数を入力してください" << endl;
	cin >> answer;
}

int random()
{
	srand((unsigned int)time(NULL));
	return rand() % 10 + 1;
}

void problem()
{
	question = random();

	for (; ;)
	{
#if 0
		cout << question << endl;
#endif
		inoutput();
		if (answer == question)
		{
			cout << "正解" << endl;
			break;
		}
		else if (answer != question)
		{
			cout << "不正解" << endl;

			if (answer < question)
			{
				cout << "もっと大きい数字です" << endl;
			}
			else if (answer > question)
			{
				cout << "もっと小さい数字です" << endl;
			}
		}
	}
}