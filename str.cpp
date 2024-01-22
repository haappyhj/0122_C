#include<iostream>
#include<string>
using namespace std;

int main() {
	
	//string name;

	//cout << "이름 무엇?";
	//cin >> name;

	//cout << "당신의 이름" << name << "입니다.";

	////1. length()
	//cout << "당신의 이름 길이는" << name.length() << "입니다.";

	////영어 , 특수문자 빼고 다 2바이트 처리됨 그래서 나누기 2 해야 찐 글자수 나옴

	////2.substr(start,length):부분 문자열
	//string coffee;
	//cout << "당신의 최애 커피는?";
	//cin >> coffee;
	//cout << coffee.substr(0, 3) << endl; //마지막거 빼고 출력함

	//3.find(substr,start): 시작되는 곳의 인덱스 돌려줌
	//string coffee;
	//cout << "당신의 최애 커피는?";
	//cin >> coffee;
	//cout << coffee.find("cano",0) << endl;

	////4.append(string): 끝에 추가
	//string dog;
	//cout << "당신이 키우는 개 이름은?";
	//cin >> dog;
	//dog.append("킹");
	//cout << "당신의 개 이름은" << dog << "이군요";

	////5.insert(index,string):index번째에 string 넣겠음
	//string coffee;
	//cout << "커피 이름:";
	//cin >> coffee;
	//coffee.insert(0, "차가운");
	//cout << "주문하신" << coffee << "나왔습니다" << endl;

	////6.erase(start,length):지정된 범위의 문자 삭제
	//string coffee = "americano";
	//coffee.erase(0, 6);
	//cout << coffee << endl;

	////7.replace(start,length,string)
	//string coffee = "americano";
	//coffee.replace(0, 5, "british");
	//cout << coffee;

	//8.compare(string):비교하는것임
	////문자열이 0,첫 1, 두-1
	//string coffee = "americano";
	//cout<<coffee.compare("aCoffee") << endl;

	//9.[]
	int num;
	cin >> num;

	string coffee = "maxim";
	cout << coffee[num];







	return 0;
}