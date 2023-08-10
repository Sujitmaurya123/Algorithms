#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,a[100];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    for ( i = 0; i <n ; i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        int minIndex=i;
        for(j=i+1;j<n;j++){
            if(a[minIndex]>a[j]){
                minIndex=j;
            }
            
        }
        swap(a[minIndex], a[i]);
    }
    cout<<"sorted array is"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<< a[i]<<" ";
    }
}