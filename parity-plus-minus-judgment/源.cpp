#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int	x;
	const char* temp, * temp2;
	//const char* temp2;
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
		temp = "ż";
		break;
	case 1:
		temp = "��";
		break;
	}
	if (x < 0)
	{
		temp2 = "��";
	}
	else if (x == 0)
	{
		//cout << "�����Ǹ���" << endl;
		temp2 = "�����Ǹ�";

	}
	else
	{
		//cout << "����" << endl;
		temp2 = "��";
	}
	cout << "xΪ" << temp << "��" << temp2 << "��" << endl;
	system("pause");

}

