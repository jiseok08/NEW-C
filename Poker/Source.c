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
	
	int score = 0;
	int dscore = 0;
	int dup = 0;
	int ddup = 0;
	int Straight = 0;
	int flush = 0;
	int dStraight = 0;
	int dflush = 0;
	int money = 500;
	int gmoney = 0;
	int bmoney = 0;
	int dupc = 0;
	int a = 0;
	int y = 0;
	int pair = 0;
	int dpair = 0;
	int numberCount[14] = { 0 };
	int dnumberCount[14] = { 0 };
	char play = TRUE;
	char s = '0';



	printf("당신은 도박장에 왔습니다.\n");
	printf("당신의 목표는 2000원을 모으는 것 입니다.\n\n");

	printf("당신의 전 재산은 %d원입니다.\n\n\n\n", money);
	printf("기본 시작요금은 50원 입니다.\n");
	do
	{
		a = 0;
		printf("진행하시려면 y 또는 n를 입력하세요.\n");
		scanf_s(" %c", &s, 1);
		system("cls");
		if (s == 'y' || s == 'Y')
		{
			struct Card Card;
			{
				while (play == TRUE)
				{	
					srand(time(NULL));
					a = 0;
					y = 0;
					gmoney = 50;
					bmoney = 0;
					money -= gmoney;
					gmoney *= 2;
					score = 0;
					dscore = 0; 
					int o = 2;
					pair = 0;
					dpair = 0;
					Straight = 0;
					dStraight = 0;
					flush = 0;
					dflush = 0;
					int highestCard = 0;
					int dhighestCard = 0;
					int highestOnePair = 0;
					int dhighestOnePair = 0;
					int pairs[2] = { 0, 0 };
					int index = 0;
					int dpairs[2] = { 0, 0 };
					int dindex = 0;
					for (int i = 0; i < 14; i++)
					{
						numberCount[i] =  0 ;
						dnumberCount[i] =  0 ;
					}

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


					} //for문 끝

					

					for (int i = 0; i < 3; i++)
					{

						do
						{	
							system("cls");
							s = '0';
							printf("당신의 자산 : %d\n\n", money);
							printf("게임의 판돈 : %d\n\n", gmoney);
							printf("CALL, RALSE, FOLD 중 하나를 선택하여 선택한 행동의 앞 글자만 입력해 주십시오.\n");
							printf("CALL : 판돈 유지\n");
							printf("RALSE : 배팅\n");
							printf("FOLD : 다이\n\n\n");


							for (int j = 0; j <= o; j++)
							{
				
								if (Card.fnum[j] != 0)
								{
									printf("당신의 %d번 카드 : %s %d\t", j + 1, Card.shape[j], Card.fnum[j]);
								}
								else if (Card.fnum[j] == 0)
								{
									printf("당신의 %d번 카드 : %s %c\t", j + 1, Card.shape[j], Card.over[j]);
								}
								
								if (j < 2)
								{
									printf("딜러의 %d번 카드 : ???\n", j + 1);
								}
								else
								{
									if (Card.fnum[j + 5] != 0)
									{
										printf("딜러의 %d번 카드 : %s %d\n", j + 1, Card.shape[j + (SIZE / 2)], Card.fnum[j + (SIZE / 2)]);
									}
									else if (Card.fnum[j + 5] == 0)
									{
										printf("딜러의 %d번 카드 : %s %c\n", j + 1, Card.shape[j + (SIZE / 2)], Card.over[j + (SIZE / 2)]);
									}
								}


							}


							s = 'a';
							scanf_s(" %c", &s, 1);
							if (s == 'C' || s == 'c')
							{
								printf("CALL을 선택하셨습니다. 게속 진행됩니다.\n");
								system("PAUSE");
								s = 'a';
							}
							else if (s == 'R' || s == 'r')
							{
								printf("RALSE를 선택하셨습니다.\n");
								printf("배팅할 금액을 입력해 주세요.\n");

								scanf_s(" %d", &bmoney);
								if (bmoney > money)
								{
									printf("당신의 자산 : %d\n\n\n", money);
									printf("다시 입력해 주세요.\n");
								}

								system("PAUSE");
								system("cls");
								gmoney += (bmoney * 2);
								money -= bmoney;
								bmoney = 0;
								s = 'a';
							}
							else if (s == 'F' || s == 'f')
							{
								printf("FOLD를 선택하셨습니다.\n");
								printf("게임을 다시 시작합니다.\n");
								system("PAUSE");
								system("cls");
								s = 'a';
								i = 100;
							}
							else
							{
								printf("잘못된 입력입니다.\n");
								printf("다시 입력해 주십시오.\n");
								system("PAUSE");
							}


						} while (s != 'a');
						o++;
					} // for문 끝
					o = 2;
					
					system("cls");


					for (int j = 0; j < 5; j++)
					{

						if (Card.fnum[j] != 0)
						{
							printf("당신의 %d번 카드 : %s %d\t", j + 1, Card.shape[j], Card.fnum[j]);
						}
						else if (Card.fnum[j] == 0)
						{
							printf("당신의 %d번 카드 : %s %c\t", j + 1, Card.shape[j], Card.over[j]);
						}
						
						
						if (Card.fnum[j + 5] != 0)
						{
							printf("딜러의 %d번 카드 : %s %d\n", j + 1, Card.shape[j + (SIZE / 2)], Card.fnum[j + (SIZE / 2)]);
						}
						else if (Card.fnum[j + 5] == 0)
						{
							printf("딜러의 %d번 카드 : %s %c\n", j + 1, Card.shape[j + (SIZE / 2)], Card.over[j + (SIZE / 2)]);
						}
						
					}
					
					

					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < i; j++)
						{
							if (Card.fshape[i] == Card.fshape[j])
							{
								flush = 1;
							}
						}
					}

					for (int i = 0; i < 5; i++)
					{
						numberCount[Card.num[i]]++;
					}
				
					int pair = 0, triples = 0, fourOfAKind = 0, RoyalStraight =0, BackStraight =0;
					for (int i = 1; i <= 13; i++)
					{
						if (numberCount[i] == 2) pair++;
						if (numberCount[i] == 3) triples++;
						if (numberCount[i] == 4) fourOfAKind++;
					}

					for (int i = 2; i <= 9; i++) {
						if (numberCount[i] && numberCount[i + 1] && numberCount[i + 2] && numberCount[i + 3] && numberCount[i + 4]) {
							Straight = 1;
							break;
						}
					}
					if (numberCount[10] && numberCount[11] && numberCount[12] && numberCount[13] && numberCount[1]) {
						RoyalStraight = 1;
					}
					if (numberCount[1] && numberCount[2] && numberCount[3] && numberCount[4] && numberCount[5]) {
						BackStraight = 1;;
					}


					printf("당신의 패 :");
					// 플러쉬는 0, 스트레이트는 1
					if (RoyalStraight = 1&& flush == 0)
					{
						printf("Royal Straight Flush\n");
						score = 1000;
					}
					else if (BackStraight == 1 && flush == 0)
					{
						printf("Back Straight Flush\n");
						score = 900;
					}
					else if (Straight == 1&& flush == 0 )
					{
						printf("Straight Flush\n");
						score = 800;
					}
					else if (fourOfAKind == 1)
					{
						printf("Four of a Kind\n");
						score = 700;
					}
					else if (triples == 1 && pair == 1)
					{
						printf("Full House\n");
						score = 600;
					}
					else if (flush == 0)
					{
						printf("Flush\n");
						score = 500;
					}
					else if (Straight == 1)
					{
						printf("Straight\n");
						score = 400;
					}
					else if (triples == 1) 
					{
						printf("Three of a Kind\n");
						score = 300;
					}
					else if (pair == 2)
					{
						printf("Two Pair\n");
						score = 200;
					}
					else if (pair == 1)
					{
						printf("One Pair\n");
						score = 100;
					}
					else 
					{
						printf("High Card\n");
						score = 50;
					}




					for (int i = 0; i < 5; i++)
					{
						for (int j = 0; j < i; j++)
						{
							if (Card.fshape[i+(SIZE/2)] == Card.fshape[j+(SIZE/2)])
							{
								dflush = 1;
							}
						}
					}

					for (int i = 0; i < 5; i++)
					{
						dnumberCount[Card.num[i + (SIZE/2)]]++;
					}

					int dpair = 0, dtriples = 0, dfourOfAKind = 0, dRoyalStraight = 0, dBackStraight = 0;
					for (int i = 1; i <= 13; i++)
					{
						if (dnumberCount[i] == 2) { dpair++; }
						if (dnumberCount[i] == 3) {dtriples++;}
						if (dnumberCount[i] == 4) { dfourOfAKind++; }
					}
					for (int i = 2; i <= 9; i++) {
						if (dnumberCount[i] && dnumberCount[i + 1] && dnumberCount[i + 2] && dnumberCount[i + 3] && dnumberCount[i + 4]) {
							dStraight = 1;
							break;
						}
					}
					if (dnumberCount[10] && dnumberCount[11] && dnumberCount[12] && dnumberCount[13] && dnumberCount[1]) {
						dRoyalStraight = 1;
						break;
					}
					if (dnumberCount[1] && dnumberCount[2] && dnumberCount[3] && dnumberCount[4] && dnumberCount[5]) {
						dBackStraight = 1;
						break;
					}

					printf("딜러의 패 :");

					if (dRoyalStraight = 1 && dflush == 0)
					{
						printf("Royal Straight Flush\n");
						dscore = 1000;
					}
					else if (dBackStraight == 1 && dflush == 0)
					{
						printf("Back Straight Flush\n");
						dscore = 900;
					}
					else if (dStraight == 1 && dflush == 0)
					{
						printf("Straight Flush\n");
						dscore = 800;
					}
					else if (dfourOfAKind)
					{
						printf("Four of a Kind\n");
						dscore = 700;
					}
					else if (dtriples == 1 && dpair == 1)
					{
						printf("Full House\n");
						dscore = 600;
					}
					else if (dflush == 0)
					{
						printf("Flush\n");
						dscore = 500;
					}
					else if (dStraight == 1)
					{
						printf("Straight\n");
						dscore = 400;
					}
					else if (dtriples == 1)
					{
						printf("Three of a Kind\n");
						dscore = 300;
					}
					else if (dpair == 2)
					{
						printf("Two Pair\n");
						dscore = 200;
					}
					else if (dpair == 1)
					{
						printf("One Pair\n");
						dscore = 100;
					}
					else
					{
						printf("High Card\n");
						dscore = 50;
					}


					if (score == 50 && dscore == 50)
					{
						for (int i = 1; i <= 13; i++)
						{
							if (numberCount[i] == 1)
							{
								highestCard = i;
								if (i == 1)
								{
									break;
								}
							}
						}
						for (int i = 1; i <= 13; i++)
						{
							if (dnumberCount[i] == 1)
							{
								dhighestCard = i;
								if (i == 1)
								{
									break;
								}
							}
						}

						if (highestCard == 1 && dhighestCard == 1)
						{
						}

						else if (highestCard == 1)
						{
							score += 1;
						}
						else if (dhighestCard == 1)
						{
							dscore += 1;
						}
						else if (highestCard > dhighestCard)
						{
							score += 1;
						}
						else if (highestCard < dhighestCard)
						{
							dscore += 1;
						}
						else if (highestCard == dhighestCard)
						{
						}
					}

					else if (score == 100 && dscore == 100)
					{
						for (int i = 1; i < 13; i++)
						{
							if (numberCount[i] == 2)
							{
								highestOnePair = i;
							}
							if (dnumberCount[i] == 2)
							{
								dhighestOnePair = i;
							}
						}

						if (highestOnePair == 1 && dhighestOnePair == 1)
						{ }
						else if (highestOnePair == 1)
						{
							score += 1;
						}
						else if (dhighestOnePair == 1)
						{
							dscore += 1;
						}
						else if (highestOnePair == dhighestOnePair)
						{}
						else if (highestOnePair > dhighestOnePair)
						{
							score += 1;
						}
						else if (highestOnePair < dhighestOnePair)
						{
							dscore += 1;
						}

					}

					else if (score == 200 && dscore == 200)
					{
						for (int i = 1; i <= 13; i++)
						{
							if (numberCount[i] == 2)
							{
								pairs[index++] = i;
							}
							if (dnumberCount[i] == 2)
							{
								dpairs[dindex++] = i;
							}
						}


						if (pairs[0] == 1 || dpairs[0] == 1) 
						{
							if (pairs[0] == dpairs[0]) 
							{
								if (pairs[1] == dpairs[1])
								{
								}
								else if (pairs[1] > dpairs[1]) 
								{
									score += 1;
								}
								else 
								{
									dscore += 1;
								}
							}
							else if (pairs[0] == 1) 
							{
								score += 1;
							}
							else
							{
								dscore += 1;
							}
						}
						else
						{
							if (pairs[1] > dpairs[1])
							{
								score += 1;
							}
							else if (pairs[1] < dpairs[1])
							{
								dscore += 1;
							}
							else
							{
								if (pairs[0] > dpairs[0]) 
								{
									score += 1;
								}
								else if (pairs[0] < dpairs[0])
								{
									dscore += 1;
								}
								else
								{
								}
							}
						}

					}








					if (score > dscore)
					{
						money += gmoney;
						printf("당신이 승리하였습니다.\n");
					}
					else if(score < dscore)
					{
						gmoney = 0;
						printf("딜러가 승리하였습니다.\n");
					}
					else
					{
						printf("비겼습니다. 배팅금을 나눠받고 게임을 재시작합니다.\n");
						money += (gmoney / 2);
						gmoney = 0;
					}

					system("PAUSE");


					if (money > 2000)
					{
						printf("축하합니다, 당신은 부자가 되었습니다!\n\n\n");
						printf("G A M E   C L E A R\n");
						system("PAUSE");
						play = FALSE;
					}

					if (money <= 0)
					{
						printf("당신은 파산하였습니다.\n\n\n");
						printf("G A M E   O V E R\n");
						system("PAUSE");
						play = FALSE;
					}

					system("cls");


				}


			}
		}
		else if (s == 'n' || s == 'N')
		{
			printf("게임을 포기하셨습니다\n\n\n");
			printf("게임을 종료합니다\n");
			system("PAUSE");
			return 0;
		}
		else
		{
			printf("잘못 선택하셨습니다.\n");
			printf("다시 선택해 주십시오.\n");
			system("PAUSE");
			system("cls");
			a = 1;
		}
	} while (a == 1);

	return 0;
}