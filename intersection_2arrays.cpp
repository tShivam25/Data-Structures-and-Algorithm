// This code is print the intersection of the two arrays.
#include<iostream>
using namespace std;

int isPresent(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1; // found
        }
    }
    return 0; // not found
}

int intersection(int arr1[], int arr2[], int arr3[], int size1, int size2){
    int size3=0;
    if(size1>=size2){
        for(int i=0; i<size1; i++){
            for(int j=0; j<size2; j++){
                if(arr1[i]==arr2[j]){
                    if (isPresent(arr3, size3, arr1[i]) == 0){
                        arr3[size3]=arr1[i];
                        size3++;
                    }
                }
                else{
                    continue;
                }
            }
        }
    }
    else{
        for(int i=0; i<size2; i++){
            for(int j=0; j<size1; j++){
                if(arr2[i]==arr1[j]){
                    if(isPresent(arr3, size3, arr2[i])==0){
                        arr3[size3]=arr2[i];
                        size3++;
                    }
                }
            }
        }
    }
    return size3;
}

int main(){
    int size1;
    int size2;
    cout<< "Enter size of your 1st array.";
    cin >> size1;
    int arr1[size1];
    cout << "Enter elements of 1st array.";
    for(int i=0; i<size1; i++){
        cin >> arr1[i];
    }
    cout << "Enter size of your 2nd array.";
    cin >> size2;
    int arr2[size2];
    cout << "Enter elements of 2nd array.";
    for(int i=0; i<size2; i++){
        cin >> arr2[i];
    }
    int arr3[100];
    int size3=intersection(arr1,arr2,arr3,size1,size2);
    cout<<"The intersection of the two arrays are:";
    for(int i=0; i<size3; i++){
        cout<< arr3[i] << " ";
    }
    return 0;
}