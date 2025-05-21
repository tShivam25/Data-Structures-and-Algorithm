#include<iostream>
using namespace std;

int WillSort(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else{
                continue;
            }
        }
    }
    return 0;
}

int MajorityElement(int arr[], int size){
    WillSort(arr,size);
    int freq=1,ans=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]==arr[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=arr[i];
        }
        if(freq>size/2){
            return ans;
        }
    }
    return -1;
}

int main(){
    int size;
    cout << "Enter the no. of elements in an array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Lets find out the majority element in the array!!!!" << endl;
    int majority=MajorityElement(arr,size);
    if(majority==-1){
        cout << "Majority Element not found." << endl;
    }
    else{
        cout << "Majority Element is: " << majority << endl;
    }
    return 0;
}