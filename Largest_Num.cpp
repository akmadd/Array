#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,4,6,4,9};
    int n = sizeof(arr)/sizeof(int);

    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
            cout<< "Assigning the value of" << arr[i] << " to max" << endl;
        }
    }
    cout << "Max is: " << max << endl;
    return 0;
}