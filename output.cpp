//c++입출력 모음집

#include<iostream>
using namespace std; //std를 기본적으로 있다고 가정함

int main() {

	//cout 의미: 출력
	// cin 입력
	//endl 의미: 끝 줄바꿈

	//std::cout에서 :: 의미: 안에 있는 객체를 쓰겠음

	int age;

	cout << "나이 입력:" ;

	cin >> age;

	cout << "Hello World!" << endl;

	cout << "박현지 컴공 그냥 그렇다" << endl;

	cout << age << "살 입니다"<< endl;

	return 0;
}