// WordCount.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int ch, count = 1;
	FILE *pt;    //文件指针

	// 判断是否输入文件
	if (argc != 3) {
		printf("请使用格式: %s 文件名", argv[0]);
		exit(1);    //非正常退出
	}

	// 判断能否成功打开文件
	if ((pt = fopen(argv[2], "r")) == NULL) {  //将argv[1]赋值给指针pt
		printf("打开文件 %s 失败", argv[2]);
		exit(1);
	}

	if (strcmp(argv[1], "-c") == 0) {
		count = 0;
		while ((ch = getc(pt)) != EOF) {  //EOF 表示文件结束
			count++;
		}
		printf("字符数：%d个\n", count);
	}
	else {
		while ((ch = getc(pt)) != EOF) {
			if ((ch == ' ') || (ch == ','))
				count++;
		}
		printf("单词数：%d个\n", count);
	}
	fclose(pt);
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

