// This code is to find an element in an array using linear search.
#include<iostream>
using namespace std;

// Function for performing linear search algorithm
int linearsearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i;
        }
        else{
            continue;
        }
    }
    return -1;
}

// Main function
int main(){
    int size;
    cout << "Enter the number of elements in the array:";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array:";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the element to search for:";
    cin >> target;
    int result= linearsearch(arr, size, target);                 //Calling linear search function
    if(result !=-1){
        cout << "Element found at index:" << result << endl;
    }
    else{
        cout << "Element not found in the array." << endl;
    }
    return 0;
} 