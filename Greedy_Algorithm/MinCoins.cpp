#include<bits/stdc++.h>
using namespace std;

int minCoins(int coins[],int n,int amount){
    sort(coins,coins+n);
    int res=0;
    for(int i=0;i<n;i++){
        if(coins[i]<=amount){
            int c= floor(amount /coins[i]);
            res=res+c;
            amount=amount-c*coins[i];
        }
        if(amount==0){
            break;
        }
    }
    return res;
}

int main(){
int n=4;
int coins[n]={3,2,1,5};
int amount=52;
int sk=minCoins(coins,n,amount);
cout<<sk<<endl;
return 0;

}