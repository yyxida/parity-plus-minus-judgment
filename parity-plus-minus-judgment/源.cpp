#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int	x;
	const char* temp, * temp2;
	//const char* temp2;
	cout << "请输入x的值: " << endl;
	cin >> x;
	while (cin.fail())            /* 判断输入是否为数字 */
	{
		cin.clear();
		cin.ignore(2048, '\n'); /* 清除键盘缓冲区直到'\n'，即回车（包括回车）之前的2048个字符 */
		cout << "请输入可运算的数字！" << endl;
		cout << "请重新输入x的值:" << endl;
		cin >> x;
		if (cin.fail())
		{
			cout << "cin错误，现在将强制退出程序。" << endl << "你应该输入可运算的数字！" << endl;
			system("pause");
			return 0;
		}
		break;
	}
	system("cls");                        /* 清空显示区域 */
	switch (abs(x) % 2)					   /* 对绝对值进行判断 */
	{
	case 0:
		temp = "偶";
		break;
	case 1:
		temp = "奇";
		break;
	}
	if (x < 0)
	{
		temp2 = "负";
	}
	else if (x == 0)
	{
		//cout << "非正非负数" << endl;
		temp2 = "非正非负";

	}
	else
	{
		//cout << "正数" << endl;
		temp2 = "正";
	}
	cout << "x为" << temp << "的" << temp2 << "数" << endl;
	system("pause");

}

