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
	char over[SIZE];
	int fshape[SIZE];
	char shape[10];
};

int main()
{
	srand(time(NULL));
	int dup = 0;
	struct Card Card;
	{
		for (int i = 0; i < SIZE; i++)
		{

			do
			{
				dup = 0;

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
					if (Card.shape[i] == Card.shape[j] && Card.num[i] == Card.num[j])
					{
						dup == 1;
					}
				}

			} while (dup == 1);

				if (Card.fnum[i] != 0)
			{
				printf("%d�� ī�� : %s %d\n", i, Card.shape, Card.fnum[i]);
			}
				   else if (Card.fnum[i] == 0)
			{
				printf("%d�� ī�� : %s %c\n", i, Card.shape, Card.over[i]);
			}	
			

		}

		return 0;
	}










	// @@@@  ��Ģ  @@@@
	// 1. �� ī��� ��� �� �徿 ���� (�ߺ� X)
	// 2. ī��鿡 ���� Straight �� ������ �־�� ��
	// 3. ���տ� ���� ������ �Ű� �¸��� �й踦 ����



	return 0;
}