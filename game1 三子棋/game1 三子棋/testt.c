#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include "game.h"
game()
{
	//�洢����
	char board[ROW][COL];
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡһ������,�����Ǵ�ӡ��������
	DisplayBoard(board,ROW,COL);
}

void menu()
{
	printf("********************************\n");
	printf("**********  1,play   ***************\n");
	printf("**********  0, exit    ***************\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();

			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����");
			break;
		}
	} while (input);
	return 0;
}