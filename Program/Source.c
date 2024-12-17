#include <stdio.h>
#include <WIndows.h>

enum State
{
	IDLE,
	ATTACK,
	DIE

	// 열거형에서 중간에 있는 상수의 값을 변경하게 되면
	// 그 다음에 있는 상수의 값이 변경된 값에서부터 1씩 증가합니다.
};

enum Collar
{
	BLACK,
	DARKBLUE,
	DARKGREEN
};
// 0 BLACK
// 1 DARKBLUE
// 2 DARKGREEN

int main()
{
#pragma region 열거형
	// 고유한 상수 값에 연결된 기호 이름의
	// 집합입니다.

	int HP = 0;

	enum state state = IDLE;

	switch (HP)
	{
	case IDLE: printf("대기 상태\n");
		break;
	case ATTACK: printf("공격 상태\n");
		break;
	case DIE: printf("죽음 상태\n");
		break;
	default:
		break;
	}

#pragma endregion

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKBLUE);


	printf("GYM");

	return 0;
}