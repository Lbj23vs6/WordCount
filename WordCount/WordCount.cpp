// WordCount.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "iostream"
#include "fstream"
#include "cstdlib"
using namespace std;

int main(int argv, char** arg)
{
	string path = "C:\\Users\\ASUS\\Desktop\\练习1.txt";
	char context[1000] = "\0";
	char con[1000] = "";
	char text[300][20] = {};
	ifstream File(path);
	while (!File.eof())
	{
		File.getline(context, 100);
	}
	int x1 = 0;
	int j = 0;
	for (int i = 0; i < strlen(context) + 1; i++)
	{
		if (context[i] >= 'a'&& context[i] <= 'z')
		{
			con[x1] = context[i];
			x1++;
		}
		else
		{
			strcpy_s(text[j], con);
			j++;
			x1 = 0;
		}
	}
	cout << "一共" << j << "单词，如下：" << endl;
	for (int i = 0; i < j; i++)
	{
		cout << "第" << i + 1 << "个单词是：" << text[i] << endl;
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

