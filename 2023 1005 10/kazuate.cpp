#include <iostream>
#include <cstdlib>
#include <ctime>
#include"kazuate.h"
using namespace std;

int answer = 0;
int question = 0;

void inoutput()
{
	cout << "1`10‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;
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
			cout << "³‰ð" << endl;
			break;
		}
		else if (answer != question)
		{
			cout << "•s³‰ð" << endl;

			if (answer < question)
			{
				cout << "‚à‚Á‚Æ‘å‚«‚¢”Žš‚Å‚·" << endl;
			}
			else if (answer > question)
			{
				cout << "‚à‚Á‚Æ¬‚³‚¢”Žš‚Å‚·" << endl;
			}
		}
	}
}