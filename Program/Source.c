#include <stdio.h>

#define SIZE 10000

void Load(const char * fileName)
{
	// "r" read : 파일을 읽기 위해 사용하는 모드입니다.
	FILE* file = fopen(fileName, "r");

	char buffer[SIZE] = { 0, };

	// 첫 번째 매개변수 : 읽은 데이터를 저장할 메모리 버퍼의 포인터 변수
	// 두 번째 매개변수 : 각 데이터 항목의 크기
	// 세 번째 매개변수 : 데이터를 읽어올 데이터 파일의 항목의 수
	// 네 번째 매개변수 : 데이터를 읽어올 파일의 포인터 변수

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);
}

int main()
{
#pragma region 파일 쓰기
	
	// "w" write : 파일을 쓰기 모드로 진행합니다.
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

#pragma region 파일 읽기

	Load("Unit.txt");


#pragma endregion



	return 0;
}