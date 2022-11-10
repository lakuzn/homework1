#include <iostream>
#include <math.h>

using namespace std;

double task7(int a, int b, int c) {
	setlocale(LC_ALL, "RUS");
	int d;
	double x1, x2;
	d = b * b - 4 * a * c; //��������� ������������
	if (d < 0) cout << "��� ������." << endl;
	else {
		x1 = ((-1 * b + sqrt(d)) / (2 * a));
		x2 = ((-1 * b - sqrt(d)) / (2 * a)); //��������� ����� ���������
		cout << "����� ��������� � ������ 7 ����� " << x1 << " � " << x2 << endl;
		return x1, x2;
	}
}

double task8(int a, int b, int c) {
	double m;
	m = 0.5 * sqrt(2 * b * b + 2 * c * c - a * a); //������� ��� ���������� ������
	cout << "������� � ������� ������ ����� " << m << endl;
	return m;
}

int task9(int k) {
	int cc, cm;
	cc = k / 3600; //��������� ���-�� ����� �����
	cm = (k % 3600) / 60; //��������� ���-�� ����� �����
	cout << "� ������� ������ ������ " << cc << " ����� ����� � " << cm << " �����." << endl;
	return 0;
}

void task10(int a, int b, int c) {
	if ((a == b) || (b == c) || (a == c)) cout << "����������� �� ������� ������ �������� ��������������." << endl;
	else cout << "����������� �� ������� ������ �� �������� ��������������." << endl;
}

void main() {
	task7(8,2,-1);
	task8(3, 4, 5);
	task9(60000);
	task10(3, 3, 2);
}