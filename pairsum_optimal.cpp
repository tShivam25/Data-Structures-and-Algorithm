#include<iostream>
#include<vector>
using namespace std;

vector <int> PairSum(int arr[], int size, int target){
    vector <int> answer;
    int i=0, j=size-1;
    while(i<j){
        int pairsum=arr[i]+arr[j];
        if(pairsum<target){
            i++;
        }
        else if(pairsum>target){
            j--;
        }
        else if(pairsum==target){
            answer.push_back(arr[i]);
            answer.push_back(arr[j]);
            return answer;
        }
    }
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
    int target;
    cout << "Let's take out pairsum!!!" << "\n" << "Enter the target sum: ";
    cin >> target;
    vector <int> answer=PairSum(arr, size, target);
    cout << "The pair of target sum is: " << answer[0] << " and " << answer[1] << endl;
    return 0;
}