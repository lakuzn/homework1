#include <iostream>
#include <math.h>
using namespace std;


double task11(int s) {
	setlocale(LC_ALL, "RUS");
	if (s > 1000)
		s = s * 0.9; //��������� ����� �� �������
	cout << "����� ������� � 11 ������ ���������� " << s << endl;;
	return s;
}

void task12(int l, int v) {
	int iv;
	iv = l - 100; //��������� ��������� ���
	if (v < iv) cout << "������������ �� 12 ������ ���������� �����������." << endl;
	else cout << "������������ �� 12 ������ ���������� ��������." << endl;
}

void task13(int pr1) {
	int min = 1;
	int max = 9;
	int x, y, pr;
	x = min + rand() % max; //��������� � � �������� �� 1 �� 9
	y = min + rand() % max; //��������� � � �������� �� 1 �� 9
	pr = x * y;
	if (pr1 == pr) cout << "����������� � ������ ����� 13 �� ������. ������������ ����� " << pr << endl;
	else cout << "����������� � 13 ������ ������. ������������ ����� " << pr << endl;
}
double task14(double cost, int t, int d) {
		double stoimost;
		stoimost = cost * t; //������� ��������� ���������, ���� ������������ ������ (cost) �� ����� ���������. 
		if ((d == 6) || (d == 7)) stoimost = stoimost * 0.8;
		cout << "��������� ��������� � 14 ������ ����� " << stoimost << endl;
		return stoimost;
	}

void task15(int a) {
	if ((a <= 12) && (a >= 1)) { //��������� ������������ ��������
		switch (a) { //���������� �������� switch ��� ������� ������ �� ����������
		case 1:
			cout << "������. ����.\t" << endl;
			break;
		case 2:
			cout << "�������. ����.\t" << endl;
			break;
		case 3:
			cout << "����. �����.\t" << endl;
			break;
		case 4:
			cout << "������. �����.\t" << endl;
			break;
		case 5:
			cout << "���. �����.\t" << endl;
			break;
		case 6:
			cout << "����. ����.\t" << endl;
			break;
		case 7:
			cout << "����. ����.\t" << endl;
			break;
		case 8:
			cout << "������. ����.\t" << endl;
			break;
		case 9:
			cout << "��������. �����.\t" << endl;
			break;
		case 10:
			cout << "�������. �����.\t" << endl;
			break;
		case 11:
			cout << "������. �����.\t" << endl;
			break;
		case 12:
			cout << "�������. ����.\t" << endl;
			break;
		}
	}
	else cout << "������� ����� �� 1 �� 12." << endl;
}

void main() {
	task11(5000);
	task12(180, 70);
	task13(98);
	task14(90, 20, 6);
	task15(9);
}