#include <iostream> 
#include <string>
#include <cctype>
using namespace std;

int main(){
    string str;
    cout << "Enter string: ";
    cin >> str;
    for(int i = 0; i <= str.length(); i++){
        str[i] = tolower(str[i]); 
    }
    string result = "";
    for(int i = str.length() - 1; i >= 0 ; i--){
        result = result + str[i];
    }
    if(str == result){
        cout << "String is palindrome";
    }
    else{
        cout << "String isnot palindrome";
    }
    return 0;
}