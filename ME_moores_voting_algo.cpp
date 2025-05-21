#include<iostream>
using namespace std;

int MooresAlgo(int arr[], int size){
    int freq=0,ans;
    for(int i=0; i<size; i++){
        if(freq==0){
            ans=arr[i];
        }
        if(ans==arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
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
    int majority=MooresAlgo(arr,size);
    int count = 0;
for (int i = 0; i < size; i++) {
    if (arr[i] == majority)
        count++;
}
if(count > size/2){
    cout << "Majority Element is: " << majority << endl;
}
else{
    cout << "No Majority Element found." << endl;
}
    return 0;
}