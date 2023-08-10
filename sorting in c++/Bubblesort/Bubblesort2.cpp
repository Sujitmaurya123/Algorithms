#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }


    }
}
void printsort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){
    int arr[]={2,6,3,8,5};
    int n=5;

    bubblesort(arr,n);

    printsort(arr,n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    return 0;
    
}