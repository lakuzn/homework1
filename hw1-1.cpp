#include <iostream>
#include <math.h>
using namespace std;

double task1(int b1, int b2, int h) {
	setlocale(LC_ALL, "RUS");
	double s; 
	s = (b1 + b2) / 2 * h; //вычисл€ем площадь трапеции
	cout << "ѕлощадь трапеции в первой задаче равна " << s << endl;
	return s;
}
double task2(int r) {
	double s, l;
	l = 3.14 * 2 * r; //вычисл€ем длину окружности
	s = 3.14 * r * r; //вычисл€ем площадь круга
	cout << "ѕлощадь во второй задаче равна " << s << endl << "ƒлина окружности во второй задаче равна " << l << endl;
	return l, s;
}

double task3(int a, int b) {
	double s, c;
	s = (a * b) / 2; //вычисл€ем площадь треугольника
	c = sqrt((a * a) + (b * b)); //вычисл€ем гипоетнузу
	cout << "ѕлощадь треугольника в третьей задаче равна " << s << ", а гипотенуза равна " << c << endl;
	return s, c;
}

int task4(int a) {
	int s = 0;
	int b = 0;
	if ((a > 999) && (a < 10000)) { //проверка введенных данных
		for (int i = 0; i < 4; i++) {
			b = a % 10;
			s = s + b; //вычисл€ем сумму цифр
			a = a / 10;
		}
		cout << "—умма цифр в четвертой задаче равна " << s << endl;
		return s;
	}
}

double task5_6(double x, double y, double r, double fi) {
	double ppr, ppfi, dpx, dpy;
		ppr = pow((x * x + y * y), 0.5);
		ppfi = atan(y / x); //выполн€ем переход от декартовых к пол€рным.
		cout << "ѕри переходе от декартовых координат к пол€рным в задаче 5 получили радиальную координату " << ppr << " и азимут " << ppfi << endl; 
		dpx = r * cos(fi);
		dpy = r * sin(fi); //выполн€ем переход от пол€рных к декартовым
		cout << "ѕри переходе от пол€рных координат к декартовым в задаче 6 получили x равный " << dpx << " и у равный " << dpy << endl;
		return ppr, ppfi, dpx, dpy;
}
void main() {
	task1(4, 4, 2);
	task2(3);
	task3(3, 4);
	task4(1000);
	task5_6(2, 3, 3, 60);
}