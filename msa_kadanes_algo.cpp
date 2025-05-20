#include<iostream>
using namespace std;

void display(int arr[],int size){
    for(int start=0; start<size; start++){
        for(int end=start; end<size; end++){
            for(int i=start; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << "  ";
    }
    cout << " " << endl;
}

int max_subarray_sum(int arr[], int size, int MAX){
    for(int start=0; start<size; start++){
        int currSum=0;
        for(int end=0; end<size; end++){
            currSum+=arr[end];
            MAX=max(currSum,MAX);

            if(currSum < 0){
                currSum=0;
            }
        }
    }
    return MAX;
}

int main(){
    int size;
    cout << "Enter the size of an array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int MAX=0;
    int choice;
    while(choice== 1 or 2){
        cout << "What you want me to do next??" << "\n" << "1. Display all subarrays" << "\n" << "2. Find out the maximum subarray sum" << "\n" << "3. Exit" << "\n" << "\n" << "Enter your choice as 1,2 or 3: ";
    cin >> choice;
    cout << " " << endl;
    if(choice==1){
        display(arr,size);
        cout << "_ _ _" << endl;
    }
    else if(choice==2){
        MAX=max_subarray_sum(arr,size,MAX);
        cout << "The maximum subarray sum is: " << MAX << endl;
        cout << "_ _ _" << endl;
    }
    else if(choice==3){
        break;
    }
    else{
        cout << "Invalid Choice" << endl;
    }
    }
    return 0;
}