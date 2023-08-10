#include<bits/stdc++.h>
using namespace std;

void Selectionsort(int arr[],int n){

    for ( int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for ( int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
           
        }
        swap(arr[minIndex], arr[i]);
    }
}



int main(){
    int arr[]={4,6,3,2,9};
    int n=5;
    Selectionsort(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

}