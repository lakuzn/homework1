﻿#include <iostream>
#include <math.h>
using namespace std;


void task16(int a) {
	setlocale(LC_ALL, "RUS");
	int x, y, z, c, m, n;
	if ((a > 99999) && (a < 1000000)) { //проверка введенного числа
		x = a % 10;
		a = a / 10;
		y = a % 10;
		a = a / 10;
		z = a % 10;
		a = a / 10;
		c = a % 10;
		a = a / 10;
		m = a % 10;
		a = a / 10;
		n = a % 10; //ищем цифры данного числа
		if ((x + y + z) == (c + m + n)) cout << "Число из 16 задачи счастливое." << endl;
		else cout << "Число из 16 задачи не счастливое." << endl;
	}
	else cout << "Введенное число из 16 задачи не шестизначное." << endl;
}

void task17(int a) {
	if ((a <= 99) && (a >= 1)) { //проверка введенного числа
		if ((a == 1) || (a == 21) || (a == 31) || (a == 41) || (a == 51) || (a == 61) || (a == 71) || (a == 81) || (a == 91)) //проверяем все исключения
			cout << a << " копейка" << endl;
		else if ((a==2) || (a == 3) || (a == 4) || (a == 22) || (a == 23) || (a == 24) || (a == 32) || (a == 33) || (a == 34) || (a == 42) || (a == 43) || (a == 44) || (a == 52) || (a == 53) || (a == 54) || (a == 62) || (a == 63) || (a == 64) || (a == 72) || (a == 73) || (a == 74) || (a == 82) || (a == 83) || (a == 84) || (a == 92) || (a == 93) || (a == 94)) 
			cout << a << " копейки" << endl;
		else cout << a << " копеек" << endl;
		}
	}


int task18(int a) {
	int x, y, z, c;
	if ((a > 999) && (a < 10000)) { //проверка введенного числа
		x = a % 10;
		a = a / 10;
		y = a % 10;
		a = a / 10;
		z = a % 10;
		a = a / 10;
		c = a % 10; //ищем цифры данного числа
		if ((x == c) && (y == z)) cout << "Число из восемнадцатого задания является палиндромом." << endl;
		else cout << "Число из восемнадцатого задания не является палиндромом." << endl;
	}
	else cout << "Введенное в восемнадцатом задании число не четырехзначное." << endl;
	return 0;
}

int task19(int a, int b) {
	int s = 0;
	int k = 0;
	int k1 = 0;
	int p = 1;
	int c = a;
	if ((a > 99) && (a < 1000)) { //проверка введенного числа
		for (int i = 0; i < 3; i++) {
			k = a % 10;
			s = s + k;
			a = a / 10; //ищем сумму цифр числа
		}
		for (int i = 0; i < 3; i++) {
			k1 = c % 10;
			p = k1 * p;
			c = c / 10; //ищем произведение цифр числа
		}
		if (s % 7 == 0) cout << "Сумма цифр в задаче 19 кратна 7." << endl;
		else cout << "Сумма цифр в задаче 19 не кратна 7." << endl;
		if (p>b) cout << "Произведение цифр в задаче 19 больше числа b." << endl;
		else cout << "Произведение цифр в задаче 19 меньше числа b." << endl;
		return s;
	}
}

int task20(double a, double b, double c, double d) {
	double min1, min2, max1, max2;
	if (a > b) {
		max1 = a;
		min1 = b;
	}
	else {
		max1 = b;
		min1 = a;
	}
	if (c > d) {
		max2 = c;
		min2 = d;
	}
	else {
		max2 = d;
		min2 = c; //вычисляем, какая из сторон в прямоугольниках меньшая, а какая большая
	}
	if (max1 < min2) {
		cout << "Прямоугольник из 20 задания со сторонами " << a << " и " << b << " можно поместить в треугольник со сторонами " << c << " и " << d << endl;
	}
	else if (max1 < max2) {
		cout << "Прямоугольник из 20 задания со сторонами " << a << " и " << b << " можно поместить в треугольник со сторонами " << c << " и " << d << endl;
	} else 
		cout << "Прямоугольник из 20 задания со сторонами " << a << " и " << b << " нельзя поместить в треугольник со сторонами " << c << " и " << d << endl;
	return 0;
}

void main() {
	task16(721343);
	task17(33);
	task18(1331);
	task19(121, 4);
	task20(5, 3, 2, 5);
}