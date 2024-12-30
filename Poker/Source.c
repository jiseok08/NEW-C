#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define SIZE 5 



struct Card
{
	int num[SIZE];
	int fnum[SIZE];
	int fshape[SIZE];
	char over[SIZE];
	char shape[10];
};

void Dealer()
{
	struct Card Card;


}




int main()
{
	srand(time(NULL));
	int score = 0;
	int dup = 0;
	int Straight = 0;
	int flush = 0;
	int money = 500;
	int gmoney = 0;
	int bmoney = 0;
	int l = 0;
	char play = TRUE;
	char s = '0';
	
	

	printf("����� �����忡 �Խ��ϴ�.\n");
	printf("����� �� ����� %d���Դϴ�.\n\n\n\n", money);
	printf("�⺻ ���ۿ���� 50�� �Դϴ�.\n");
	printf("�����Ͻ÷��� y�� �Է��ϼ���.\n");
	scanf_s(" %c", &s, 1);
	system("cls");
	if (s == 'y')
	{
		struct Card Card;
		{
			while (play == TRUE)
			{
				for (int i = 0; i < SIZE; i++)
				{

					do
					{
						dup = 0;
						Straight = 0;
						flush = 0;
						gmoney = 50;

						Card.fnum[i] = 0;
						Card.num[i] = 0;
						Card.num[i] = rand() % 13 + 1;
						switch (Card.num[i])
						{
						case 1:
							Card.over[i] = 'A';
							break;
						case 2: Card.fnum[i] = 2;
							break;
						case 3: Card.fnum[i] = 3;
							break;
						case 4: Card.fnum[i] = 4;
							break;
						case 5: Card.fnum[i] = 5;
							break;
						case 6: Card.fnum[i] = 6;
							break;
						case 7: Card.fnum[i] = 7;
							break;
						case 8: Card.fnum[i] = 8;
							break;
						case 9: Card.fnum[i] = 9;
							break;
						case 10: Card.fnum[i] = 10;
							break;
						case 11: Card.over[i] = 'J';
							break;
						case 12: Card.over[i] = 'Q';
							break;
						case 13: Card.over[i] = 'K';
							break;
						}
						for (int k = 0; k < 5; k++)
						{
							Card.fshape[i] = rand() % 4 + 1;
						}
						switch (Card.fshape[i])
						{ 
						case 1: Card.shape[0] = 'S';
							Card.shape[1] = 'p';
							Card.shape[2] = 'a';
							Card.shape[3] = 'd';
							Card.shape[4] = 'e';
							Card.shape[5] = '\0';
							break;
						case 2: Card.shape[0] = 'D';
							Card.shape[1] = 'i';
							Card.shape[2] = 'a';
							Card.shape[3] = 'm';
							Card.shape[4] = 'o';
							Card.shape[5] = 'n';
							Card.shape[6] = 'd';
							Card.shape[7] = '\0';
							break;
						case 3:  Card.shape[0] = 'H';
							Card.shape[1] = 'e';
							Card.shape[2] = 'a';
							Card.shape[3] = 'r';
							Card.shape[4] = 't';
							Card.shape[5] = '\0';
							break;
						case 4: Card.shape[0] = 'C';
							Card.shape[1] = 'l';
							Card.shape[2] = 'u';
							Card.shape[3] = 'b';
							Card.shape[4] = '\0';
						}
						for (int j = 0; j < i; j++)
						{
							if (Card.fshape[i] == Card.fshape[j] && Card.num[i] == Card.num[j])
							{
								dup = 1;
							}
						}
					} while (dup == 1);

					l = 0;
					system("cls");
					for (l; l <= i; l++)
					{
						
						if (Card.fnum[l] != 0)
						{
							printf("����� %d�� ī�� : %s %d\n", l + 1, Card.shape, Card.fnum[l]);
						}
						else if (Card.fnum[l] == 0)
						{
							printf("����� %d�� ī�� : %s %c\n", l + 1, Card.shape, Card.over[l]);
						}
					}





					if (i > 1)
					{
						do
						{
							s = '0';
							printf("CALL, RALSE, FOLD �� �ϳ��� �����Ͽ� ������ �ൿ�� �� ���ڸ� �Է��� �ֽʽÿ�.\n");
							s = 'a';
							scanf_s(" %c", &s, 1);
							if (s == 'C' || s == 'c')
							{
								printf("CALL�� �����ϼ̽��ϴ�. �Լ� ����˴ϴ�.\n");
								system("PAUSE");
								s = 'a';
							}
							else if (s == 'R' || s == 'r')
							{
								printf("RALSE�� �����ϼ̽��ϴ�.\n");
								printf("������ �ݾ��� �Է��� �ֽʽÿ�.\n");
								scanf_s(' %d', &bmoney, 1);
								gmoney + bmoney;
								bmoney = 0;
								s = 'a';
							}
							else if (s == 'F' || s == 'f')
							{
								printf("FOLD�� �����ϼ̽��ϴ�.\n");
								printf("������ �ٽ� �����մϴ�.\n");
								system("PAUSE");
								s = 'a';
							}
							else
							{
								printf("�߸��� �Է��Դϴ�.\n");
								printf("�ٽ� �Է��� �ֽʽÿ�.\n");
								system("PAUSE");
							}
							system("cls");
							
						} while (s != 'a');
					}
					if (i != 0)
					{
						if (Card.num[i - 1] == Card.num[i])
						{
							Straight++;
						}
					}
					if (i != 0)
					{
						if (Card.fshape[i] == Card.fshape[i - 1])
						{
							flush++;
						}
					}

				} // for �� ��
				if (flush == SIZE && Straight == SIZE)
				{
					score = 10;
					printf("��Ʈ����Ʈ �÷���\n");
				}
				else if (Straight == SIZE)
				{
					score = 9;
					printf("��Ʈ����Ʈ\n");
				}
				else if (flush == SIZE)
				{
					score = 8;
					printf("�÷���\n");
				}









				system("cls");

				// if (money <= 0)
				// {
				// 	system("cls");
				// 	printf("����� �� ����� �����Ͽ����ϴ�.\n");
				// 	printf("����� �����忡�� �i�ܳ����ϴ�.\n\n\n\n\n");
				// 	printf("GAME OVER\n");
				// }
				// printf("����� ����");
			}


		}
	}
	else
	{
		printf("������ �����ϼ̽��ϴ�\n\n\n");
		printf("������ �����մϴ�\n");
		system("PAUSE");
		return 0;
	}



	// @@@@  ��Ģ  @@@@
	// 1. �� ī��� ��� �� �徿 ���� (�ߺ� X)
	// 2. ī��鿡 ���� Straight �� ������ �־�� ��
	// 3. ���տ� ���� ������ �Ű� �¸��� �й踦 ����



	return 0;
}