#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

enum Over
{
	ace = 1,
	J = 11,
	Q,
	k
};

struct Card
{
	int num;
	char shape[10];
};

int main()
{
	srand(time(NULL));
	int fshape = 0;
	struct Card Card;
	{
		for (int i = 1; i <= 7; i++)
		{
			Card.num = rand() % 10 + 1;
			fshape = rand() % 4 + 1;
			switch (fshape)
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
			printf("%d�� ī�� : %s%d\n",i,Card.shape,Card.num);
		}
	}










	// @@@@  ��Ģ  @@@@
	// 1. �� ī��� ��� �� �徿 ���� (�ߺ� X)
	// 2. ī��鿡 ���� Straight �� ������ �־�� ��
	// 3. ���տ� ���� ������ �Ű� �¸��� �й踦 ����



	return 0;
}