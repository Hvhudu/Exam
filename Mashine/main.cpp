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
				cout << "Топливо кончилось" << endl;
			}
			cout << "Время движения: " << time<<" секунд." << endl;
			cout << "Уровень топлива: " << lvl_Now<<" литров." << endl;
			
		}
		
	}
	void refill()
	{
		int choice;
		cout << "Уровень топлива в автомобиле: " << lvl_Defoult << endl;
		cout << "Хотите заправиться:\n 1 - Хочу!\n2 - Сегодня экономим(" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Введите кол-во литров топлива: " << endl;
			cin >> lvl_plus;
			lvl_Now = lvl_Defoult + lvl_plus;
			if (lvl_Now <= lvl_Max)
			{
				cout << "Успешно заправлено " << lvl_plus << " литров топлива!" << endl;
			}else
			{
				cout << "Бак переполнен!" << endl;
				lvl_Now = lvl_Max;
			}
			break;
		case 2:
			cout << "Счастливого пути!" << endl;
			lvl_Now = lvl_Defoult;
			break;
		default:
			cout << "Ошибка! Введены некорректные данные!" << endl;
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