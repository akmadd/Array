#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0;  i < n; i++){
        if(arr[i] == key){
            return i;  // if element is present in the array
        }
        
    }
    return -1;  // if element is not present in the array
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    cout << linearSearch(arr, n, 11) << endl;
    return 0;
}