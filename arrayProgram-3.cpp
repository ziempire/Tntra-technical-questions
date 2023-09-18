#include <iostream>
using namespace std;

int main(){
    // int arr[] = {1,2,3,4,5};
    // int size = sizeof(arr)/sizeof(arr[0]);
    int size;
    cout << "Enter size: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout << "Enter value "<< i+1 <<":" ;
        cin >> arr[i];
    }
    int maxElement = arr[0];
    int minElement = arr[0];
    for(int  i = 0; i < size; i++){
        if(arr[i] > maxElement){
            maxElement = arr[i];
        }
           if(arr[i] < minElement){
            minElement = arr[i];
        }
    }
    cout << "Maximum element in array is: " << maxElement <<endl;
    cout << "Minimum element in array is: " << minElement;
 return 0;    
}