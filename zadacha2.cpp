﻿#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus"); // Включаем поддержку русского языка
	float g; // Объявляем переменную g (float)
	const float ft = 7.481; // Объявляем константу ft (float), присваиваем ей значение 7.481
	cout << "Пожалуйста введите количество галлонов: " << endl; // Просим пользователя ввести число галлонов
	cin >> g; // Присваиваем переменной g значение введённое пользователем
	float result = g / ft; // Вычисляем результат
	cout << "Объём в футах равен: " << result; // Выводим результат

}