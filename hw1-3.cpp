#include <iostream>
#include <math.h>
using namespace std;


double task11(int s) {
	setlocale(LC_ALL, "RUS");
	if (s > 1000)
		s = s * 0.9; //вычисляем сумму со скидкой
	cout << "Сумма покупки в 11 задаче составляет " << s << endl;;
	return s;
}

void task12(int l, int v) {
	int iv;
	iv = l - 100; //вычисляем идеальный вес
	if (v < iv) cout << "Пользователю из 12 задачи необходимо поправиться." << endl;
	else cout << "Пользователю из 12 задачи необходимо похудеть." << endl;
}

void task13(int pr1) {
	int min = 1;
	int max = 9;
	int x, y, pr;
	x = min + rand() % max; //вычисляем х в пределах от 1 до 9
	y = min + rand() % max; //вычисляем у в пределах от 1 до 9
	pr = x * y;
	if (pr1 == pr) cout << "Тестируемый в задаче номер 13 не ошибся. Произведение равно " << pr << endl;
	else cout << "Тестируемый в 13 задаче ошибся. Произведение равно " << pr << endl;
}
double task14(double cost, int t, int d) {
		double stoimost;
		stoimost = cost * t; //считаем стоимость разговора, путём перемножения тарифа (cost) на время разговора. 
		if ((d == 6) || (d == 7)) stoimost = stoimost * 0.8;
		cout << "Стоимость разговора в 14 задаче равна " << stoimost << endl;
		return stoimost;
	}

void task15(int a) {
	if ((a <= 12) && (a >= 1)) { //проверяем правильность введения
		switch (a) { //используем оператор switch для каждого случая из двенадцати
		case 1:
			cout << "Январь. Зима.\t" << endl;
			break;
		case 2:
			cout << "Февраль. Зима.\t" << endl;
			break;
		case 3:
			cout << "Март. Весна.\t" << endl;
			break;
		case 4:
			cout << "Апрель. Весна.\t" << endl;
			break;
		case 5:
			cout << "Май. Весна.\t" << endl;
			break;
		case 6:
			cout << "Июнь. Лето.\t" << endl;
			break;
		case 7:
			cout << "Июль. Лето.\t" << endl;
			break;
		case 8:
			cout << "Август. Лето.\t" << endl;
			break;
		case 9:
			cout << "Сентябрь. Осень.\t" << endl;
			break;
		case 10:
			cout << "Октябрь. Осень.\t" << endl;
			break;
		case 11:
			cout << "Ноябрь. Осень.\t" << endl;
			break;
		case 12:
			cout << "Декабрь. Зима.\t" << endl;
			break;
		}
	}
	else cout << "Введите число от 1 до 12." << endl;
}

void main() {
	task11(5000);
	task12(180, 70);
	task13(98);
	task14(90, 20, 6);
	task15(9);
}