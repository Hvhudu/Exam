﻿#include <iostream>
#include <windows.h>
#include <stdio.h>

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
	void refill()
	{
		int choice;
		cout << "Уровень топлива в автомобиле: " << lvl_Defoult << endl;
		cout << "Хотите заправиться:\n 1 - Хочу\n2 - Не хочу" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Введите кол-во литров топлива: " << endl;
			cin >> lvl_plus;
			lvl_Now = lvl_Defoult + lvl_plus;
			if (lvl_Now <= lvl_Max)
			{
				if (lvl_plus < 0)
					cout << "Вы слили " << lvl_plus << " литров топлива!" << endl;
				else
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
			cerr << "Ошибка! Введены некорректные данные!" << endl;
			break;
		}

	}
	void Drive()
	{
		//bool drive;
		int choice;
		cout << "Нажмите '1' для двидения" << endl;
		cout << "Нажмите '2' для торможения" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			Engine();
			break;
		case 2:
			cout << "Вы стоите на месте" << endl;
			return;
			break;
		default:
			cerr << "Error!" << endl;
			break;
		}
		/*if (choice = "W")
		{
			drive = true;
		}
		else
		{
			drive = false;
		}
		if (drive = true)
		{
			Engine();
		}
		else
		{
			cout << "Вы стоите на месте" << endl;
		}*/
	}
private:
	
	void Engine()
	{
		for (lvl_Now = lvl_Now; lvl_Now > lvl_Min; lvl_Now-expend)
		{
			lvl_Now = lvl_Now - expend;
			time++;

			cout << "Время движения: " << time << " секунд." << endl;
			cout << "Уровень топлива: " << lvl_Now << " литров." << endl;
			system("cls");
			if (lvl_Now < lvl_Min)
				cout << "Бак ушёл в резерв" << endl;
		
		}
		
	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	Car car;
	car.refill();
	car.Drive();
	
}
