#include <iostream>
using namespace std;
int main(){
    int arr[5] = {9, 2, 3, 8, 5};
    int largest = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest number is: " << largest << endl;
    return 0;
}