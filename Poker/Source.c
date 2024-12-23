#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

struct Card
{
	int num;
	int fnum;
	char over;
	char shape[10];
};

int main()
{
	int mamory[7];
	char cmamory[7];
	srand(time(NULL));
	int fshape = 0;
	struct Card Card;
	{
		for (int i = 1; i <= 7; i++)
		{
			Card.num = 0;
			Card.fnum = 0;
			Card.num = rand() % 13 + 1;
			switch (Card.num)
			{
				Card.fnum = 0;
			case 1:
				Card.over = 'A';
			break;
			case 2: Card.fnum = 2;
				break;
			case 3: Card.fnum = 3;
				break;
			case 4: Card.fnum = 4;
				break;
			case 5: Card.fnum = 5;
				break;
			case 6: Card.fnum = 6;
				break;
			case 7: Card.fnum = 7;
				break;
			case 8: Card.fnum = 8;
				break;	 
			case 9: Card.fnum = 9;
				break;
			case 10: Card.fnum = 10;
				break;
			case 11: Card.over = 'J';
				break;
			case 12: Card.over = 'Q';
				break;
			case 13: Card.over = 'K';
				break;
			}
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
			mamory[i] = Card.fnum;
			cmamory[i] = Card.over;
			if (mamory[i] == mamory[i - 1])
			{
				i--;
			}
			else if (cmamory[i] == cmamory[i - 1])
			{
				i--;
			}
			else
			{
				if (Card.fnum != 0)
				{
					printf("%d번 카드 : %s %d\n", i, Card.shape, Card.fnum);
				}
				else if (Card.fnum == 0)
				{
					printf("%d번 카드 : %s %c\n", i, Card.shape, Card.over);
				}
			}
		}

		return 0;
	}










	// @@@@  규칙  @@@@
	// 1. 각 카드는 모두 한 장씩 있음 (중복 X)
	// 2. 카드들에 따라 Straight 등 조합이 있어야 함
	// 3. 조합에 따라 점수를 매겨 승리와 패배를 가림



	return 0;
}