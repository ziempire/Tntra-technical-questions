#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    cout << "Number before swapping:"<<endl;
    cout << "Number-1: "<<a<<endl;
    cout << "Number-2: "<<b<<endl;
    cout << "Number after swapping:"<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Number-1: "<<a<<endl;
    cout << "Number-2: "<<b<<endl;

}