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
		printf("��");
	}
}

int main()
{
#pragma region rand() �Լ�

	// seed ���� ���� rand�� ���� �ٲ�� �˴ϴ�.
	// srand(time(NULL));
	// 
	// int random = rand() %10 + 1;
	// 
	// printf("random ������ �� : %d\n", random);

#pragma endregion

#pragma region ���� �Լ�

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

#pragma region localtime() �Լ�
	// time_t currentTime = 0;
	// 
	// time(&currentTime);
	// 
	// struct tm* timePointer = localtime(&currentTime);
	// 
	// printf("%d ��\n", timePointer->tm_sec);
	// printf("%d ��\n", timePointer->tm_min);
	// printf("%d ��\n", timePointer->tm_hour);
	// printf("%d ��\n", timePointer->tm_mday);
	// printf("%d ��\n", timePointer->tm_mon + 1);
	// printf("%d ��\n", timePointer->tm_year + 1900);
	// 
	// switch (timePointer->tm_wday)
	// {
	// case 0: printf("�Ͽ���");
	// 	break;
	// case 1: printf("������");
	// 	break;
	// case 2: printf("ȭ����");
	// 	break;
	// case 3: printf("������");
	// 	break;
	// case 4: printf("�����");
	// 	break;
	// case 5: printf("�ݿ���");
	// 	break;
	// case 6: printf("�����");
	// 	break;
	// }

#pragma endregion

#pragma region UP - DOUN Game

	srand(time(NULL));

	int Health = 5;

	int c_num = rand() % 50 + 1;

	int player = 0;

	printf("UP - DOUN ���ӿ� ���Ű��� ȯ���մϴ�.\n\n\n");
	printf("���ݺ��� ��ǻ���� ���� ���߽ø� �˴ϴ�.\n\n\n");
	printf("��ǻ���� ���� 1~50 �����Դϴ�.\n");

	
	
	while (Health > 0)
	{

		scanf_s("%d", &player);
		printf("�Է��� ���� : %d\n", player);
		if (player == c_num)
		{
			printf("VICTORY\n");
			break;
		}
		else if (player < c_num)
		{
			printf("�Է��Ͻ� ���� ��ǻ���� ���ں��� �۽��ϴ�\n");
			printf("Health - 1");
			Health --;
			printf("Health = %d\n", Health);
			View(Health);
		}
		else if (player > c_num)
		{
			printf("�Է��Ͻ� ���� ��ǻ���� ���ں��� Ů�ϴ�\n");
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