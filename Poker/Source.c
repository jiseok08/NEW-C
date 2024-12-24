#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <Windows.h>

#define SIZE 7

struct Card
{
	int num;
	int fnum[SIZE];
	char over[SIZE];
	char shape[10];
};

int main()
{
	srand(time(NULL));
	int fshape = 0;
	struct Card Card;
	{
		for (int i = 0; i < SIZE; i++)
		{
			Card.fnum[i] = 0;
			Card.num = 0;
			Card.num = rand() % 13 + 1;
			switch (Card.num)
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

			switch (Card.shape[i])
			{
			case 'p': if (Card.fnum[i] || Card.fnum[i - 1] || Card.fnum[i - 2] || Card.fnum[i - 3]|| Card.fnum[i - 4] || Card.fnum[i - 5] || Card.fnum[i - 6])			
				i--;		
					break;
			case 'i': if (Card.fnum[i] || Card.fnum[i - 1] || Card.fnum[i - 2] || Card.fnum[i - 3] || Card.fnum[i - 4] || Card.fnum[i - 5] || Card.fnum[i - 6])			
				i--;	
				break;
			case 'e': if (Card.fnum[i] || Card.fnum[i - 1] || Card.fnum[i - 2] || Card.fnum[i - 3] || Card.fnum[i - 4] || Card.fnum[i - 5] || Card.fnum[i - 6])			
					break;
				i--;
			case 'l': if (Card.fnum[i] || Card.fnum[i - 1] || Card.fnum[i - 2] || Card.fnum[i - 3] || Card.fnum[i - 4] || Card.fnum[i - 5] || Card.fnum[i - 6])
				i--;
					break;
			default: 	
				if (Card.fnum[i] != 0)
			{
				printf("%d번 카드 : %s %d\n", i, Card.shape, Card.fnum[i]);
			}
				   else if (Card.fnum[i] == 0)
			{
				printf("%d번 카드 : %s %c\n", i, Card.shape, Card.over[i]);
			}
				break;
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