#include <stdio.h>
#include <windows.h>
#define size 10

int main()
{
	char a[size];
	const char* dialog[size];
	dialog[0] = "�ȳ��ϼ���";
	dialog[1] = "�ȳ��ϼ���. �Ƿ����Դϴ�.";
	dialog[2] = "�� Ž���Դϴ�.";
	dialog[3] = "���� �� �����ֽʼ�";
	dialog[4] = "�˰ڽ��ϴ�.";
	dialog[5] = "���� �帮�ڽ��ϴ�.";
	dialog[6] = "�� �ּ���";
	dialog[7] = "���� �� �帮�ڽ��ϴ�.";
	dialog[8] = "�����մϴ�.";
	dialog[9] = "�����Ͻʼ�";

	int count = 0;

	while(count < size)
	{
		// 0x0000 : ������ ���� ���� ���� ȣ�� �������� �������� ���� ����

		// 0x0001 : ������ ���� ���� �ְ� ȣ�� �������� �������� ���� ����

		// 0x8000 : ������ ���� ���� ���� ȣ�� ������ �����ִ� ����

		// 0x8001 : ������ ���� ���� �ְ� ȣ�� ������ �����ִ� ����

		if (GetAsyncKeyState(VK_SPACE) & 0x0001)
		{
			system("cls");

			if (count % 2 == 1)
			{
				printf("�Ƿ���:");
			}
			else
			{
				printf("Ž��:");
			}

			printf("%s\n", dialog[count]);


			count++;
		}

	}

	return 0;
}