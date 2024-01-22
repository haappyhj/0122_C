#include<iostream>
#include<string>
using namespace std;

string trim(string my_string,int n) {

	return my_string.substr(my_string.length() - n, n);
}
int main() {

	cout << trim("HiWorld", 3)<< endl;

	





	return 0;
}