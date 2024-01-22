#include<iostream>
using namespace std;

int main() {
	cout << "태어난 년도를 입력해라\n" << endl;
	int year;
	cin >> year;
	cout << "만으로" << 2024 - year - 1 << "살입니다\n" << endl;

	cout << "정사각형 한 변의 길이를 입력해라\n" << endl;
	int l;
	cin >> l;
	cout << "정사각형 넓이는\n" << l*l << endl;


	cout << "원의 반지름의 길이를 입력해라\n" << endl;
	int r;
	int pi = 3.14;
	cin >> r;
	cout << "원의 둘레와 넓이는\n" << 2*pi*r<< r*r*pi << endl;

	cout << "3개의 숫자를 입력해라\n" << endl;
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	cout << "평균은\n" <<  (a+b+c)/3 << endl;


	return 0;
}

