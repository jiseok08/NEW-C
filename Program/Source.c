#include <stdio.h>
#include <WIndows.h>

enum State
{
	IDLE,
	ATTACK,
	DIE

	// ���������� �߰��� �ִ� ����� ���� �����ϰ� �Ǹ�
	// �� ������ �ִ� ����� ���� ����� ���������� 1�� �����մϴ�.
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
#pragma region ������
	// ������ ��� ���� ����� ��ȣ �̸���
	// �����Դϴ�.

	int HP = 0;

	enum state state = IDLE;

	switch (HP)
	{
	case IDLE: printf("��� ����\n");
		break;
	case ATTACK: printf("���� ����\n");
		break;
	case DIE: printf("���� ����\n");
		break;
	default:
		break;
	}

#pragma endregion

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKBLUE);


	printf("GYM");

	return 0;
}