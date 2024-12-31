#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define size 5
#define SIZE size *2



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
	int l = 0;
	int dupc = 0;
	char play = TRUE;
	char s = '0';
	


	printf("����� �����忡 �Խ��ϴ�.\n");
	printf("����� �� ����� %d���Դϴ�.\n\n\n\n", money);
	printf("�⺻ ���ۿ���� 50�� �Դϴ�.\n");
	printf("�����Ͻ÷��� y�� �Է��ϼ���.\n");
	scanf_s(" %c", &s, 1);
	system("cls");
	if (s == 'y'|| s == 'Y')
	{
		struct Card Card;
		{

			for (int j = 0; j < SIZE; j++)
			{
				Card.over[j] = '0';
			}

			while (play == TRUE)
			{
				gmoney = 50;
				bmoney = 0;
				money - gmoney;
				for (int i = 0; i < SIZE; i++)
				{

					do
					{
						dup = 0;
						Straight = 0;
						flush = 0;
						
						
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

					// �÷��̾� ��
					do
					{
						ddup = 0;
						Card.fnum[i+size] = 0;
						Card.over[i + size] = '0';
						Card.num[i + size] = rand() % 13 + 1;
						switch (Card.num[i + size])
						{
						case 1:
							Card.over[i + size] = 'A';
							break;
						case 2: Card.fnum[i + size] = 2;
							break;		    
						case 3: Card.fnum[i + size] = 3;
							break;		    
						case 4: Card.fnum[i + size] = 4;
							break;		    
						case 5: Card.fnum[i + size] = 5;
							break;		    
						case 6: Card.fnum[i + size] = 6;
							break;		    
						case 7: Card.fnum[i + size] = 7;
							break;		    
						case 8: Card.fnum[i + size] = 8;
							break;		    
						case 9: Card.fnum[i + size] = 9;
							break;
						case 10: Card.fnum[i + size] = 10;
							break;
						case 11: Card.over[i + size] = 'J';
							break;
						case 12: Card.over[i + size] = 'Q';
							break;
						case 13: Card.over[i + size] = 'K';
							break;
						}

						Card.fshape[i + size] = rand() % 4 + 1;

						switch (Card.fshape[i + size])
						{
						case 1: Card.shape[i + size][0] = 'S';
							Card.shape[i+ size][1] = 'p';
							Card.shape[i+ size][2] = 'a';
							Card.shape[i+ size][3] = 'd';
							Card.shape[i+ size][4] = 'e';
							Card.shape[i+ size][5] = '\0';
							break;		
						case 2: Card.shape[i+size][0] = 'D';
							Card.shape[i+ size][1] = 'i';
							Card.shape[i+ size][2] = 'a';
							Card.shape[i+ size][3] = 'm';
							Card.shape[i+ size][4] = 'o';
							Card.shape[i+ size][5] = 'n';
							Card.shape[i+ size][6] = 'd';
							Card.shape[i+ size][7] = '\0';
							break;		
						case 3:  Card.shape[i+ size][0] = 'H';
							Card.shape[i+ size][1] = 'e';
							Card.shape[i+ size][2] = 'a';
							Card.shape[i+ size][3] = 'r';
							Card.shape[i+ size][4] = 't';
							Card.shape[i+ size][5] = '\0';
							break;		
						case 4: Card.shape[i+ size][0] = 'C';
							Card.shape[i+ size][1] = 'l';
							Card.shape[i+ size][2] = 'u';
							Card.shape[i+ size][3] = 'b';
							Card.shape[i+ size][4] = '\0';
						}

						for (int o = 0; o < i; o++)
						{
							if (Card.fshape[i ] == Card.fshape[o ] && Card.num[i ] == Card.num[o ])
							{
								ddup = 1;
							}
							
							 //�ߺ� �˻� ���� ( ���� �� �÷��̾�� ���� )
						}

						if (ddup == 1)
						{
							dupc + 1;
						}
					} while (ddup == 1);

					if (i > 1)
					{
						do
						{
							s = '0';
							printf("����� �ڻ� %d\n", money);
							printf("������ �ǵ� : %d\n", gmoney);
							printf("CALL, RALSE, FOLD �� �ϳ��� �����Ͽ� ������ �ൿ�� �� ���ڸ� �Է��� �ֽʽÿ�.\n");
							printf("CALL : �ǵ� ����\n");
							printf("RALSE : ����\n");
							printf("FOLD : ����\n\n\n\n");
							l = 0;
							for (int j = 0; j < 10; j++)
							{
								printf("%c", Card.over[j]);
							}
							printf("\n");
							printf("%d", dupc);
							for (int e = 0 + size; e <= i + size; e++)
							{
								for (l; l <= i; l++)
								{
									if (Card.fnum[l] != 0)
									{
										printf("����� %d�� ī�� : %s %d\n", l + 1, Card.shape[l], Card.fnum[l]);
									}
									else if (Card.fnum[l] == 0)
									{
										printf("����� %d�� ī�� : %s %c\n", l + 1, Card.shape[l], Card.over[l]);
									}
								}
								if (Card.fnum[e] != 0)
								{
									printf("������ %d�� ī�� : %s %d\n", e +1 - size, Card.shape[e], Card.fnum[e]);
								}
								else if (Card.fnum[e] == 0)
								{
									printf("������ %d�� ī�� : %s %c\n", e +1 - size, Card.shape[e], Card.over[e]);
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
								printf("������ �ݾ��� �Է��� �ֽʽÿ�.\n");
								gmoney + bmoney;
								money - bmoney;
								bmoney = 0;
								scanf_s(' %d', &bmoney, 1);
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