#include<iostream>
#include <unistd.h> 
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

int BuySell(int price[],int days){
    int MaxProfit=0;
    int BestBuy=price[0];
    for(int i=1; i<days; i++){
        if(price[i]>BestBuy){
            MaxProfit=max(MaxProfit,price[i]-BestBuy);
        }
        BestBuy=min(BestBuy,price[i]);
    }
    for(int i=0;i<days;i++){
        if(price[i]==BestBuy){
            cout << "The best day for buying stocks is on day " << i+1 << " to gain the maximum profit which is " << MaxProfit << endl;
        }
    }
    return 0;
}

int main(){
    int days;
    cout << "Enter the no. of days in trading: ";
    cin >> days;
    int price[days];
    cout << "Enter prices of stocks of each day: ";
    for(int i=0; i<days; i++){
        cin >> price[i];
    }
    cout << "Lets find out the best day for buying and selling your stocks!!!!" << endl;
    load();
    cout << endl;
    BuySell(price,days);
    return 0;
}