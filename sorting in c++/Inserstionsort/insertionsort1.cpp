#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,temp,a[100],n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<=n;i++){
        temp=a[i];
        j=i-1;
       
        while(temp<a[j]&&(j>=0)){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
        
    }
    cout<<"Sorted array is:"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    return 0;
}