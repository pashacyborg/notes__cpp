#include <iostream>

using namespace std;

/*� ���� ������� �� �������� ������� ����������(�����) � ������������ ������� private, ������� ����� ������������
�������� ���������� � ����� ���������. ���� ���������� ���� - ��������� ����� �����������, ���� ����, ��������� �����������
�� �����. �������� ���� ����� � private, �.�. � ��� �� ���������, � ���������. ����� � ������ ���� ������ ���� ������� ����������, 
������� ���������� ������������ ������ ������/�� �����������.
*/

class coffeeGrinder
{
private:
	bool Voltage()
	{
		return true;									//� ����������� �� true ���� false, ���� ��������� ����� ��������
	}													//��-�������. � �� ���� ���������� ����� �� ������ ��������

public:
	void Start() 
	{
		bool isVoltageNormal = Voltage();

		if (isVoltageNormal)							//�.�. if �������� � ������� ��������, ����� ����� �������� 
		{												//if (Voltage()) - ������� ������ ���� true, ���� false
			cout << "��������� ��������" << endl;
		}
		else
		{
			cout << "��������� �� ����������" << endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	coffeeGrinder BoschMKM;
	BoschMKM.Start();

	return 0;
}