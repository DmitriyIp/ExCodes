﻿#include<iostream> //Подключение библиотеки iostream 

using namespace std; ; // выделение пространства имени (в нем будут храниться функции и переменные)

int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b; // Объявляем переменные a и b (int)
	cout << "Введите первое число: ";
	cin >> a; // Присваиваем переменной a значение введённое пользователем
	cout << "Введите второе число: ";
	cin >> b; // Присваиваем переменной b значение введённое пользователем
	int c = a * b; // Вычисляем результат
	cout << "Результат умножения: " << c; // Выводим результат



}
