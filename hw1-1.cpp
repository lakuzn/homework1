#include <iostream>
#include <math.h>
using namespace std;

double task1(int b1, int b2, int h) {
	setlocale(LC_ALL, "RUS");
	double s; 
	s = (b1 + b2) / 2 * h; //��������� ������� ��������
	cout << "������� �������� � ������ ������ ����� " << s << endl;
	return s;
}
double task2(int r) {
	double s, l;
	l = 3.14 * 2 * r; //��������� ����� ����������
	s = 3.14 * r * r; //��������� ������� �����
	cout << "������� �� ������ ������ ����� " << s << endl << "����� ���������� �� ������ ������ ����� " << l << endl;
	return l, s;
}

double task3(int a, int b) {
	double s, c;
	s = (a * b) / 2; //��������� ������� ������������
	c = sqrt((a * a) + (b * b)); //��������� ����������
	cout << "������� ������������ � ������� ������ ����� " << s << ", � ���������� ����� " << c << endl;
	return s, c;
}

int task4(int a) {
	int s = 0;
	int b = 0;
	if ((a > 999) && (a < 10000)) { //�������� ��������� ������
		for (int i = 0; i < 4; i++) {
			b = a % 10;
			s = s + b; //��������� ����� ����
			a = a / 10;
		}
		cout << "����� ���� � ��������� ������ ����� " << s << endl;
		return s;
	}
}

double task5_6(double x, double y, double r, double fi) {
	double ppr, ppfi, dpx, dpy;
		ppr = pow((x * x + y * y), 0.5);
		ppfi = atan(y / x); //��������� ������� �� ���������� � ��������.
		cout << "��� �������� �� ���������� ��������� � �������� � ������ 5 �������� ���������� ���������� " << ppr << " � ������ " << ppfi << endl; 
		dpx = r * cos(fi);
		dpy = r * sin(fi); //��������� ������� �� �������� � ����������
		cout << "��� �������� �� �������� ��������� � ���������� � ������ 6 �������� x ������ " << dpx << " � � ������ " << dpy << endl;
		return ppr, ppfi, dpx, dpy;
}
void main() {
	task1(4, 4, 2);
	task2(3);
	task3(3, 4);
	task4(1000);
	task5_6(2, 3, 3, 60);
}