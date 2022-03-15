#include <iostream>

using namespace std;

/*��������� ������� main argc, argv ����� ��� ����, ����� �������� ���-���� ����� ��������� � ������ �� �������
�� ��������� ������/������ ����� ��� ����� ��������� � ������� � ���� ������� ��������� �����-������ ��������

argc - arguments count(���������� ����������), argv - arguments value(�������� ����������). 
���� ���� ����� ��������� � �������, �� �� ���������� ������� �� ����� ������ ������(���� ���� �� ��� ������
�� ��������� ������� ������). ������ ��������(��� �������� 0) - ������ ���� � ������ exe �����

��� ����, ����� ��������� ���� ��������� � Linux, ���� ��������� ������� ./����-�-�����
���� ����� ���� � ����� ������� ����� ��������, �� ���������� � argv � �������� ������(������� ������).
��� ����� ���������, ���� ��������� �������� ��������� � �������(�� ������)
*/

void main(int argc, char* argv[])
{
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}

	system("pause");

	//./Lesson__70...argv.exe mail.ru maslo
	//
	//Lesson__70...argv.exe
	//mail.ru
	//maslo
}