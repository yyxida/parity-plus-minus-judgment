#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int	x;
	cout << "������x��ֵ: " << endl;
	cin >> x;
	while (cin.fail())            /* �ж������Ƿ�Ϊ���� */
	{
		cin.clear();
		cin.ignore(2048, '\n'); /* ������̻�����ֱ��'\n'�����س��������س���֮ǰ��2048���ַ� */
		cout << "���������������֣�" << endl;
		cout << "����������x��ֵ:" << endl;
		cin >> x;
		if (cin.fail())
		{
			cout << "cin�������ڽ�ǿ���˳�����" << endl << "��Ӧ���������������֣�" << endl;
			system("pause");
			return 0;
		}
		break;
	}
	system("cls");                        /* �����ʾ���� */
	switch (abs(x) % 2)					   /* �Ծ���ֵ�����ж� */
	{
	case 0:
		cout << "xΪż��";
		break;
	case 1:
		cout << "xΪ���";
		break;
	}
	if (x < 0)
	{
		cout << "����" << endl;
	}
	else if (x == 0)
	{
		cout << "�����Ǹ���" << endl;

	}
	else
	{
		cout << "����" << endl;
	}
	system("pause");
}

