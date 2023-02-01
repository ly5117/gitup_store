#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include "game.h"
game()
{
	//存储数据
	char board[ROW][COL];
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印一下棋盘,本质是打印数组内容
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
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();

			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误");
			break;
		}
	} while (input);
	return 0;
}