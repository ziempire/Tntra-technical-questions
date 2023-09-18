#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1,str2;
    cout << "Enter string 1: "<<str1;
    cin >> str1;
    cout<<"Enter string 2: "<<str2;
    cin >> str2;
    cout << "Strings before swapping:"<<endl;
    cout << "String-1: "<<str1 <<endl;
    cout << "String-2: "<<str2 <<endl;
    cout << "Strings after swapping:"<<endl;
    str1 = str1 + str2;
    str2 = str1.substr(0,str1.length()-str2.length());
    str1 = str1.substr(str2.length());
    cout << "String-1: "<<str1 <<endl;
    cout << "String-2: "<<str2 <<endl;
    return 0;
}