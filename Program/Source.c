#include <stdio.h>
#include <windows.h>
#define size 10

int main()
{
	char a[size];
	const char* dialog[size];
	dialog[0] = "안녕하세요";
	dialog[1] = "안녕하세요. 의뢰인입니다.";
	dialog[2] = "전 탐정입니다.";
	dialog[3] = "저를 좀 도와주십쇼";
	dialog[4] = "알겠습니다.";
	dialog[5] = "돈을 드리겠습니다.";
	dialog[6] = "더 주세요";
	dialog[7] = "돈을 더 드리겠습니다.";
	dialog[8] = "감사합니다.";
	dialog[9] = "수고하십쇼";

	int count = 0;

	while(count < size)
	{
		// 0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태

		// 0x0001 : 이전에 누른 적이 있고 호출 시점에는 눌려있지 않은 상태

		// 0x8000 : 이전에 누른 적이 없고 호출 시점에 눌려있는 상태

		// 0x8001 : 이전에 누른 적이 있고 호출 시점에 눌려있는 상태

		if (GetAsyncKeyState(VK_SPACE) & 0x0001)
		{
			system("cls");

			if (count % 2 == 1)
			{
				printf("의뢰인:");
			}
			else
			{
				printf("탐정:");
			}

			printf("%s\n", dialog[count]);


			count++;
		}

	}

	return 0;
}