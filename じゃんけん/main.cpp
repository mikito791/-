#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int player_wins = 0, computer_win = 0, draws = 0;

	if ()//����񂯂�����܂����H
	{
		for (int i = 0; i < 3; i++)//����񂯂�������
		{
			if (i == 0)//�����
			{
				cout << "�y1���ڊJ�n�z" << endl;
				if ()//�v���C���[�ƃR���s���[�^�̎肪�Ⴄ
				{
					if ()//�v���C���[�̏���
					{
						player_wins = player_wins + 1;
					}
					else//�R���s���[�^�̏���
					{
						computer_win = computer_win + 1;
					}
				}
				else//������
				{
					draws = draws + 1;
					cout << "���������ł��I" << endl;
				}
			}
			if (i == 1)//�����
			{
				cout << "�y2���ڊJ�n�z" << endl;
				if ()//�v���C���[�ƃR���s���[�^�̎肪�Ⴄ
				{
					if ()//�v���C���[�̏���
					{
						player_wins = player_wins + 1;
					}
					else//�R���s���[�^�̏���
					{
						computer_win = computer_win + 1;
					}
				}
				else//������
				{
					draws = draws + 1;
					cout << "���������ł��I" << endl;
				}
			}
			if (i == 2)//�O����
			{
				cout << "�y3���ڊJ�n�z" << endl;
				if ()//�v���C���[�ƃR���s���[�^�̎肪�Ⴄ
				{
					if ()//�v���C���[�̏���
					{
						player_wins = player_wins + 1;
					}
					else//�R���s���[�^�̏���
					{
						computer_win = computer_win + 1;
					}
				}
				else//������
				{
					draws = draws + 1;
					cout << "���������ł��I" << endl;
				}
			}
		}
		if (player_wins > computer_win)
		{
			cout << "�y�����̏�������:" << player_wins << "����̏��������F" << computer_win << "�z" << endl;
		}
	}
	else//����񂯂�I����\��
	{
		cout << "�y����񂯂�I���z" << endl;
	}
	return 0;
}