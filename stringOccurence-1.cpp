#include <iostream>
#include <string>
using namespace std;

int stringOccurence(string str ,char a){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if (a == str[i]){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    char a;
    cout << "Input: ";
    cin >> str;
    cout << "Enter character: ";
    cin >> a;
    int count = stringOccurence(str,a);
    cout << "Count of character "<< a << " is: "<< count;
    return 0;
}