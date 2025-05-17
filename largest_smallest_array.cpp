//This code finds the largest and smallest elements in an array of integers.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int largest=arr[0];
    int smallest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout << "Largest element in the array: " << largest << endl;
    cout << "Smallest element in the array: " << smallest << endl;
    return 0;
}