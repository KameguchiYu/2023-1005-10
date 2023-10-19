#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int player = 0;
int cpu = 0;

void outinput()
{
	cout << "何を出しますか？" << endl
		<< "グー = 1, チョキ = 2, パー = 3" << endl;
	cin >> player;
}

int randomj()
{
	srand((unsigned int)time(NULL));
	return rand() % 3 + 1;
}

void game()
{
	int a = 0;
	cpu = randomj();
#if 0
	cout << cpu << endl;
#endif
	outinput();
	for (; ;)
	{
		if (player == cpu)
		{
			cout << "あいこ" << endl;
			cpu = randomj();
			cout << cpu << endl;
			outinput();
		}
		else if (player == 1)
		{
			if (cpu == 2)
			{
				cout << "プレイヤーの勝ち" << endl;
				break;
			}
			else if (cpu == 3)
			{
				cout << "CPUの勝ち" << endl;
				break;
			}
		}
		else if (player == 2)
		{
			if (cpu == 1)
			{
				cout << "CPUの勝ち" << endl;
				break;
			}
			else if (cpu == 3)
			{
				cout << "プレイヤーの勝ち" << endl;
				break;
			}
		}
		else if (player == 3)
		{
			if (cpu == 1)
			{
				cout << "プレイヤーの勝ち" << endl;
				break;
			}
			else if (cpu == 2)
			{
				cout << "CPUの勝ち" << endl;
				break;
			}
		}
	}
}