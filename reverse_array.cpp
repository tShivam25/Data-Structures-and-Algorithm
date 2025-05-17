// This code is to reverse array elements.
#include<iostream>
using namespace std;

// Function to reverse an array.
int reversearray(int arr[], int size){
    int start=0;
    int end=size-1;
    for(int i=0; i<size; i++){
        if(size%2==0){
            while(start<end){
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
        }
        else{
            while(start<=end){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
        }
    }
    return 0;
}

// Main function
int main(){
    int size;
    cout << "Enter number of elements in an array";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    reversearray(arr, size);                        // Calling reverse array function.
    cout << "The Revesed Array is:";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}