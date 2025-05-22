#include<iostream>
#include<unistd.h>
#include<windows.h>
using namespace std;

void load() {
    const char spinner[] = {'|', '/', '-', '\\'};
    const int spinnerLength = 4;
    const int durationSeconds = 3;

    int frame = 0;

    for (int i = 0; i < durationSeconds * (spinnerLength); ++i) {
        cout << "\r Loading " << spinner[frame] << flush;
        Sleep(500); 
        frame = (frame + 1) % spinnerLength;
    }
}

int ContainerWithMostWater(int height[], int size){
    int left=0;
    int right=size-1;
    int answer=0;
    int MaxWater=0;
    while(left<right){
        int width=right-left;
        int ht=min(height[left],height[right]);
        int currWater=width*ht;
        MaxWater=max(MaxWater,currWater);
        height[left]<height[right]?left++:right--;
    }
    return MaxWater;
}

int main(){
    int size;
    cout << "Enter the no. of lines: ";
    cin >> size;
    int height[size];
    cout << "Enter heights of lines: ";
    for(int i=0; i<size; i++){
        cin >> height[i];
    }
    cout << "Let's find out the largest possible capacity!!!!" << endl;
    load();
    cout << endl;
    int MaxWater=ContainerWithMostWater(height,size);
    cout << "The maximum capacity of water is: " << MaxWater << endl;
    return 0;
}