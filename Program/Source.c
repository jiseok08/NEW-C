#include <stdio.h>

#define SIZE 10000

void Load(const char * fileName)
{
	// "r" read : ������ �б� ���� ����ϴ� ����Դϴ�.
	FILE* file = fopen(fileName, "r");

	char buffer[SIZE] = { 0, };

	// ù ��° �Ű����� : ���� �����͸� ������ �޸� ������ ������ ����
	// �� ��° �Ű����� : �� ������ �׸��� ũ��
	// �� ��° �Ű����� : �����͸� �о�� ������ ������ �׸��� ��
	// �� ��° �Ű����� : �����͸� �о�� ������ ������ ����

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);
}

int main()
{
#pragma region ���� ����
	
	// "w" write : ������ ���� ���� �����մϴ�.
	// FILE* file = fopen("data.txt", "w");
	// 
	// fputs("Character Name\n", file);
	// fputs("Health\n", file);
	// fputs("Level\n", file);
	// 
	// // Health
	// // Level
	// 
	// fclose(file);

#pragma endregion

#pragma region ���� �б�

	Load("Unit.txt");


#pragma endregion



	return 0;
}