#include <iostream>
#include <math.h>

using namespace std;

double task7(int a, int b, int c) {
	setlocale(LC_ALL, "RUS");
	int d;
	double x1, x2;
	d = b * b - 4 * a * c; //вычисл€ем дискрименант
	if (d < 0) cout << "Ќет корней." << endl;
	else {
		x1 = ((-1 * b + sqrt(d)) / (2 * a));
		x2 = ((-1 * b - sqrt(d)) / (2 * a)); //вычисл€ем корни уравнени€
		cout << " орни уравнени€ в задаче 7 равны " << x1 << " и " << x2 << endl;
		return x1, x2;
	}
}

double task8(int a, int b, int c) {
	double m;
	m = 0.5 * sqrt(2 * b * b + 2 * c * c - a * a); //формула дл€ нахождени€ медиан
	cout << "ћедианы в восьмой задаче равны " << m << endl;
	return m;
}

int task9(int k) {
	int cc, cm;
	cc = k / 3600; //вычисл€ем кол-во целых часов
	cm = (k % 3600) / 60; //вычисл€ем кол-во целых минут
	cout << "¬ дев€той задаче прошло " << cc << " целых часов и " << cm << " минут." << endl;
	return 0;
}

void task10(int a, int b, int c) {
	if ((a == b) || (b == c) || (a == c)) cout << "“реугольник из дес€той задачи €вл€етс€ равнобедренным." << endl;
	else cout << "“реугольник из дес€той задачи не €вл€етс€ равнобедренным." << endl;
}

void main() {
	task7(8,2,-1);
	task8(3, 4, 5);
	task9(60000);
	task10(3, 3, 2);
}