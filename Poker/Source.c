#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define SIZE 10



struct Card
{
	int num[SIZE];
	int fnum[SIZE];
	int fshape[SIZE];
	char shape[SIZE][10];
	char over[SIZE];
};

int main()
{
	srand(time(NULL));
	int score = 0;
	int dup = 0;
	int ddup = 0;
	int Straight = 0;
	int flush = 0;
	int money = 500;
	int gmoney = 0;
	int bmoney = 0;
	int dupc = 0;
	int a = 0;
	char play = TRUE;
	char s = '0';



	printf("����� �����忡 �Խ��ϴ�.\n");
	printf("����� �� ����� %d���Դϴ�.\n\n\n\n", money);
	printf("�⺻ ���ۿ���� 50�� �Դϴ�.\n");
	do
	{
		a = 0;
		printf("�����Ͻ÷��� y �Ǵ� n�� �Է��ϼ���.\n");
		scanf_s(" %c", &s, 1);
		system("cls");
		if (s == 'y' || s == 'Y')
		{
			struct Card Card;
			{
				while (play == TRUE)
				{
					gmoney = 50;
					bmoney = 0;
					money -= gmoney;
					gmoney * 2;
					for (int i = 0; i < SIZE; i++)
					{
						do
						{
							dup = 0;
							Straight = 0;
							flush = 0;

							Card.fnum[i] = 0;
							Card.num[i] = 0;
							Card.over[i] = '0';
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

							Card.fshape[i] = rand() % 4 + 1;

							switch (Card.fshape[i])
							{
							case 1: Card.shape[i][0] = 'S';
								Card.shape[i][1] = 'p';
								Card.shape[i][2] = 'a';
								Card.shape[i][3] = 'd';
								Card.shape[i][4] = 'e';
								Card.shape[i][5] = '\0';
								break;
							case 2: Card.shape[i][0] = 'D';
								Card.shape[i][1] = 'i';
								Card.shape[i][2] = 'a';
								Card.shape[i][3] = 'm';
								Card.shape[i][4] = 'o';
								Card.shape[i][5] = 'n';
								Card.shape[i][6] = 'd';
								Card.shape[i][7] = '\0';
								break;
							case 3:  Card.shape[i][0] = 'H';
								Card.shape[i][1] = 'e';
								Card.shape[i][2] = 'a';
								Card.shape[i][3] = 'r';
								Card.shape[i][4] = 't';
								Card.shape[i][5] = '\0';
								break;
							case 4: Card.shape[i][0] = 'C';
								Card.shape[i][1] = 'l';
								Card.shape[i][2] = 'u';
								Card.shape[i][3] = 'b';
								Card.shape[i][4] = '\0';
							}

							for (int j = 0; j < i; j++)
							{
								if (Card.fshape[i] == Card.fshape[j] && Card.num[i] == Card.num[j])
								{
									dup = 1;
								}
							}
						} while (dup == 1);
					}



					for (int i = 0; i < 5; i++)
					{
						do
						{
							system("cls");
							s = '0';
							printf("����� �ڻ� : %d\n\n", money);
							printf("������ �ǵ� : %d\n\n", gmoney);
							printf("CALL, RALSE, FOLD �� �ϳ��� �����Ͽ� ������ �ൿ�� �� ���ڸ� �Է��� �ֽʽÿ�.\n");
							printf("CALL : �ǵ� ����\n");
							printf("RALSE : ����\n");
							printf("FOLD : ����\n\n\n");

							for (int k = 3; k < 4 + i; k++)
							{
								for (int j = 0; j < k; j++)
								{
									if (Card.fnum[j] != 0)
									{
										printf("����� %d�� ī�� : %s %d\t", j + 1, Card.shape[j], Card.fnum[j]);
									}
									else if (Card.fnum[j] == 0)
									{
										printf("����� %d�� ī�� : %s %c\t", j + 1, Card.shape[j], Card.over[j]);
									}

									if (k < 2)
									{
										printf("������ %d�� ī�� : ???\n", j + 1);
									}
									else
									{
										if (Card.fnum[k + (SIZE / 2)] != 0)
										{
											printf("������ %d�� ī�� : %s %d\n", j + 1, Card.shape[j + (SIZE / 2)], Card.fnum[j + (SIZE / 2)]);
										}
										else if (Card.fnum[k + (SIZE / 2)] == 0)
										{
											printf("������ %d�� ī�� : %s %c\n", j + 1, Card.shape[j + (SIZE / 2)], Card.over[j + (SIZE / 2)]);
										}
									}
								}
							}

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
								printf("������ �ݾ��� �Է��� �ּ���.\n");

								scanf_s(" %d", &bmoney);
								if (bmoney > money)
								{
									printf("����� �ڻ� : %d\n\n\n", money);
									printf("�ٽ� �Է��� �ּ���.\n");
								}

								system("PAUSE");
								system("cls");
								gmoney += bmoney;
								money -= bmoney;
								bmoney = 0;
								s = 'a';
							}
							else if (s == 'F' || s == 'f')
							{
								printf("FOLD�� �����ϼ̽��ϴ�.\n");
								printf("������ �ٽ� �����մϴ�.\n");
								system("cls");
								system("PAUSE");
								s = 'a';
								i = 100;
							}
							else
							{
								printf("�߸��� �Է��Դϴ�.\n");
								printf("�ٽ� �Է��� �ֽʽÿ�.\n");
								system("PAUSE");
							}
							

						} while (s != 'a');

					}
					for (int i = 0; i < (SIZE / 2); i++)
					{
						if (Card.num[i] == Card.num[i])
						{
							Straight++;
						}

						if (Card.fshape[i] == Card.fshape[i])
						{
							flush++;
						}
					}

					
					if (flush == SIZE && Straight == SIZE)
					{
						score = 10;
						printf("(��Ʈ����Ʈ �÷���)\n");
					}
					else if (Straight == SIZE)
					{
						score = 9;
						printf("(��Ʈ����Ʈ)\n");
					}
					else if (flush == SIZE)
					{
						score = 8;
						printf("(�÷���)\n");
					}


					system("cls");


				}


			}
		}
		else if (s == 'n' || s == 'N')
		{
			printf("������ �����ϼ̽��ϴ�\n\n\n");
			printf("������ �����մϴ�\n");
			system("PAUSE");
			return 0;
		}
		else
		{
			printf("�߸� �����ϼ̽��ϴ�.\n");
			printf("�ٽ� ������ �ֽʽÿ�.\n");
			system("PAUSE");
			system("cls");
			a = 1;
		}
	} while (a == 1);

	return 0;
}