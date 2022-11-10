#include <iostream>
#include <math.h>
using namespace std;

double task1(int b1, int b2, int h) {
	setlocale(LC_ALL, "RUS");
	double s; 
	s = (b1 + b2) / 2 * h; //вычисляем площадь трапеции
	cout << "Площадь трапеции в первой задаче равна " << s << endl;
	return s;
}
double task2(int r) {
	double s, l;
	l = 3.14 * 2 * r; //вычисляем длину окружности
	s = 3.14 * r * r; //вычисляем площадь круга
	cout << "Площадь во второй задаче равна " << s << endl << "Длина окружности во второй задаче равна " << l << endl;
	return l, s;
}

double task3(int a, int b) {
	double s, c;
	s = (a * b) / 2; //вычисляем площадь треугольника
	c = sqrt((a * a) + (b * b)); //вычисляем гипоетнузу
	cout << "Площадь треугольника в третьей задаче равна " << s << ", а гипотенуза равна " << c << endl;
	return s, c;
}

int task4(int a) {
	int s = 0;
	int b = 0;
	if ((a > 999) && (a < 10000)) { //проверка введенных данных
		for (int i = 0; i < 4; i++) {
			b = a % 10;
			s = s + b; //вычисляем сумму цифр
			a = a / 10;
		}
		cout << "Сумма цифр в четвертой задаче равна " << s << endl;
		return s;
	}
}

double task5_6(double x, double y, double r, double fi) {
	double ppr, ppfi, dpx, dpy;
		ppr = pow((x * x + y * y), 0.5);
		ppfi = atan(y / x); //выполняем переход от декартовых к полярным.
		cout << "При переходе от декартовых координат к полярным в задаче 5 получили радиальную координату " << ppr << " и азимут " << ppfi << endl; 
		dpx = r * cos(fi);
		dpy = r * sin(fi); //выполняем переход от полярных к декартовым
		cout << "При переходе от полярных координат к декартовым в задаче 6 получили x равный " << dpx << " и у равный " << dpy << endl;
		return ppr, ppfi, dpx, dpy;
}
void main() {
	task1(4, 4, 2);
	task2(3);
	task3(3, 4);
	task4(1000);
	task5_6(2, 3, 3, 60);
}