#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define SIZE 5

void Shuffle(int array[], int size)
{

	for (int i = 0; i < SIZE; i++)
	{
		int range = rand() % SIZE;

		int temporary = array[range];
		array[range] = array[i];
		array[i] = temporary;
	}

}

void View(int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("♥");
	}
}

int main()
{
#pragma region rand() 함수

	// seed 값에 따라서 rand의 값이 바뀌게 됩니다.
	// srand(time(NULL));
	// 
	// int random = rand() %10 + 1;
	// 
	// printf("random 변수의 값 : %d\n", random);

#pragma endregion

#pragma region 셔플 함수

	// srand(time(NULL));
	// 
	// int list[SIZE] = { 1,2,3,4,5 };
	// 
	// Shuffle(list, SIZE);
	// 
	// for (int i = 0; i < SIZE; i++)
	// {
	// 	printf("%d", list[i]);
	// }
#pragma endregion

#pragma region localtime() 함수
	// time_t currentTime = 0;
	// 
	// time(&currentTime);
	// 
	// struct tm* timePointer = localtime(&currentTime);
	// 
	// printf("%d 초\n", timePointer->tm_sec);
	// printf("%d 분\n", timePointer->tm_min);
	// printf("%d 시\n", timePointer->tm_hour);
	// printf("%d 일\n", timePointer->tm_mday);
	// printf("%d 월\n", timePointer->tm_mon + 1);
	// printf("%d 년\n", timePointer->tm_year + 1900);
	// 
	// switch (timePointer->tm_wday)
	// {
	// case 0: printf("일요일");
	// 	break;
	// case 1: printf("월요일");
	// 	break;
	// case 2: printf("화요일");
	// 	break;
	// case 3: printf("수요일");
	// 	break;
	// case 4: printf("목요일");
	// 	break;
	// case 5: printf("금요일");
	// 	break;
	// case 6: printf("토요일");
	// 	break;
	// }

#pragma endregion

#pragma region UP - DOUN Game

	srand(time(NULL));

	int Health = 5;

	int c_num = rand() % 50 + 1;

	int player = 0;

	printf("UP - DOUN 게임에 오신것을 환영합니다.\n\n\n");
	printf("지금부터 컴퓨터의 수를 맞추시면 됩니다.\n\n\n");
	printf("컴퓨터의 수는 1~50 사이입니다.\n");

	
	
	while (Health > 0)
	{

		scanf_s("%d", &player);
		printf("입력한 숫자 : %d\n", player);
		if (player == c_num)
		{
			printf("VICTORY\n");
			break;
		}
		else if (player < c_num)
		{
			printf("입력하신 수는 컴퓨터의 숫자보다 작습니다\n");
			printf("Health - 1");
			Health --;
			printf("Health = %d\n", Health);
			View(Health);
		}
		else if (player > c_num)
		{
			printf("입력하신 수는 컴퓨터의 숫자보다 큽니다\n");
			printf("Health - 1");
			Health --;
			printf("Health = %d\n", Health);
			View(Health);
		}
		printf("\n");
	}

	if (Health <= 0)
	{
		printf("\nDEFEAT\n");
	}

	

	



#pragma endregion




	return 0;
}