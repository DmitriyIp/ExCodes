﻿#include<iostream> //Подключение библиотеки iostream 

using namespace std; // выделение пространства имени (в нем будут храниться функции и переменные)

int main()
{
	const int a = 10; // Объявляем константу a, с типом данных int
	int b = a * 2; // Объявляем b (int) и присваиваем ей значение a*2 (20)
	int c = b; // Объявляем новую переменную для последующей декрементации

	cout << a << "\n" << b << "\n" << --c; // Вывод числа 10 - заданного константой, числа 20 - заданного присвоением и числа 19 - полученного путем декрементации


}