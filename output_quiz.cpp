#include<iostream>
using namespace std;

int main() {
	cout << "�¾ �⵵�� �Է��ض�\n" << endl;
	int year;
	cin >> year;
	cout << "������" << 2024 - year - 1 << "���Դϴ�\n" << endl;

	cout << "���簢�� �� ���� ���̸� �Է��ض�\n" << endl;
	int l;
	cin >> l;
	cout << "���簢�� ���̴�\n" << l*l << endl;


	cout << "���� �������� ���̸� �Է��ض�\n" << endl;
	int r;
	int pi = 3.14;
	cin >> r;
	cout << "���� �ѷ��� ���̴�\n" << 2*pi*r<< r*r*pi << endl;

	cout << "3���� ���ڸ� �Է��ض�\n" << endl;
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	cout << "�����\n" <<  (a+b+c)/3 << endl;


	return 0;
}

