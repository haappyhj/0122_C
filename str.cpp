#include<iostream>
#include<string>
using namespace std;

int main() {
	
	//string name;

	//cout << "�̸� ����?";
	//cin >> name;

	//cout << "����� �̸�" << name << "�Դϴ�.";

	////1. length()
	//cout << "����� �̸� ���̴�" << name.length() << "�Դϴ�.";

	////���� , Ư������ ���� �� 2����Ʈ ó���� �׷��� ������ 2 �ؾ� �� ���ڼ� ����

	////2.substr(start,length):�κ� ���ڿ�
	//string coffee;
	//cout << "����� �־� Ŀ�Ǵ�?";
	//cin >> coffee;
	//cout << coffee.substr(0, 3) << endl; //�������� ���� �����

	//3.find(substr,start): ���۵Ǵ� ���� �ε��� ������
	//string coffee;
	//cout << "����� �־� Ŀ�Ǵ�?";
	//cin >> coffee;
	//cout << coffee.find("cano",0) << endl;

	////4.append(string): ���� �߰�
	//string dog;
	//cout << "����� Ű��� �� �̸���?";
	//cin >> dog;
	//dog.append("ŷ");
	//cout << "����� �� �̸���" << dog << "�̱���";

	////5.insert(index,string):index��°�� string �ְ���
	//string coffee;
	//cout << "Ŀ�� �̸�:";
	//cin >> coffee;
	//coffee.insert(0, "������");
	//cout << "�ֹ��Ͻ�" << coffee << "���Խ��ϴ�" << endl;

	////6.erase(start,length):������ ������ ���� ����
	//string coffee = "americano";
	//coffee.erase(0, 6);
	//cout << coffee << endl;

	////7.replace(start,length,string)
	//string coffee = "americano";
	//coffee.replace(0, 5, "british");
	//cout << coffee;

	//8.compare(string):���ϴ°���
	////���ڿ��� 0,ù 1, ��-1
	//string coffee = "americano";
	//cout<<coffee.compare("aCoffee") << endl;

	//9.[]
	int num;
	cin >> num;

	string coffee = "maxim";
	cout << coffee[num];







	return 0;
}