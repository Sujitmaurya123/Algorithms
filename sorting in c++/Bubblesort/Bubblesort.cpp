#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,n,a[100];
cout<<"Enter the number of arrays"<<endl;
cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            // int temp=a[j];
            // a[j]=a[j+1];
            // a[j+1]=temp;

            swap(a[j],a[j+1]);
        }
    }
}
cout<<"Sorting array is:"<<endl;
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
 }