#include <iostream>

using namespace std;

class Car
{
	const int lvl_Min = 5;
	double lvl_Now = 0;
	double lvl_plus = 0;
	const int lvl_Max = 60;
	const int lvl_Defoult = 20;
	double time = 0;
	double expend = 0.0003;
public:
	void Moove()
	{
		
		while (lvl_Now != lvl_Min);
		{
			lvl_Now = lvl_Now - expend;
			time++;
			if (lvl_Now = lvl_Min)
			{
				cout << "������� ���������" << endl;
			}
			cout << "����� ��������: " << time<<" ������." << endl;
			cout << "������� �������: " << lvl_Now<<" ������." << endl;
			
		}
		
	}
	void refill()
	{
		int choice;
		cout << "������� ������� � ����������: " << lvl_Defoult << endl;
		cout << "������ �����������:\n 1 - ����!\n2 - ������� ��������(" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "������� ���-�� ������ �������: " << endl;
			cin >> lvl_plus;
			lvl_Now = lvl_Defoult + lvl_plus;
			if (lvl_Now <= lvl_Max)
			{
				cout << "������� ���������� " << lvl_plus << " ������ �������!" << endl;
			}else
			{
				cout << "��� ����������!" << endl;
				lvl_Now = lvl_Max;
			}
			break;
		case 2:
			cout << "����������� ����!" << endl;
			lvl_Now = lvl_Defoult;
			break;
		default:
			cout << "������! ������� ������������ ������!" << endl;
			break;
		}

	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	Car car;
	car.refill();
	car.Moove();
	
}