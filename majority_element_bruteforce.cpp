#include<iostream>
#include<vector>
using namespace std;

vector <int> MajorityElement(int arr[], int size){
    vector <int> majority; 
    for(int i=0; i<size; i++){
        int freq=0;
        for(int j=0; j<size; j++){
            if(arr[i]==arr[j]){
                freq+=1;
            }
            else{
                continue;
            }
        }
        if(freq>size/2){
            majority.push_back(arr[i]);
            return majority;
        }
    }
    majority.push_back(-1);
    return majority;
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
    int go;
    cout << "Lets find out the majority element in the array!!!!" << endl;
    vector <int> majority=MajorityElement(arr,size);
    if(majority[0]==-1){
        cout << "No Majority Element" << endl;
    }
    else{
        cout << "Majority Element is: " << majority[0] << endl;
    }
    return 0;
}