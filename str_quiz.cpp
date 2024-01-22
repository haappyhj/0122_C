#include<iostream>
#include<string>
using namespace std;

string upper(char alp, string my_string) {
    if (my_string.find(alp) == string::npos) {
        return my_string;
    }
    else {
        my_string[my_string.find(alp)] = alp - 32;
        return my_string;
    }
}

int main() {
    string name = "programmers";
    char alp = 'p';

    string result = upper(alp, name);

    cout << result << endl;

    return 0;
}


