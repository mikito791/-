#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int player_wins = 0, computer_win = 0, draws = 0;

	if ()//じゃんけんをしますか？
	{
		for (int i = 0; i < 3; i++)//じゃんけんをする回数
		{
			if (i == 0)//一回戦目
			{
				cout << "【1回戦目開始】" << endl;
				if ()//プレイヤーとコンピュータの手が違う
				{
					if ()//プレイヤーの勝ち
					{
						player_wins = player_wins + 1;
					}
					else//コンピュータの勝ち
					{
						computer_win = computer_win + 1;
					}
				}
				else//あいこ
				{
					draws = draws + 1;
					cout << "引き分けです！" << endl;
				}
			}
			if (i == 1)//二回戦目
			{
				cout << "【2回戦目開始】" << endl;
				if ()//プレイヤーとコンピュータの手が違う
				{
					if ()//プレイヤーの勝ち
					{
						player_wins = player_wins + 1;
					}
					else//コンピュータの勝ち
					{
						computer_win = computer_win + 1;
					}
				}
				else//あいこ
				{
					draws = draws + 1;
					cout << "引き分けです！" << endl;
				}
			}
			if (i == 2)//三回戦目
			{
				cout << "【3回戦目開始】" << endl;
				if ()//プレイヤーとコンピュータの手が違う
				{
					if ()//プレイヤーの勝ち
					{
						player_wins = player_wins + 1;
					}
					else//コンピュータの勝ち
					{
						computer_win = computer_win + 1;
					}
				}
				else//あいこ
				{
					draws = draws + 1;
					cout << "引き分けです！" << endl;
				}
			}
		}
		if (player_wins > computer_win)
		{
			cout << "【自分の勝った数:" << player_wins << "相手の勝った数：" << computer_win << "】" << endl;
		}
	}
	else//じゃんけん終了を表示
	{
		cout << "【じゃんけん終了】" << endl;
	}
	return 0;
}