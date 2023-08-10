#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
   //place pivot at right position
    int pivotindex=s+cnt;
  swap(arr[pivotindex],arr[s]);
    int i=s,j=e;
    while (i < pivotindex && j > pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if (i < pivotindex && j > pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[],int s,int e){

if(s>=e){
    return ;
}
//partition karege
int p=partition(arr,s,e);
//sort karege left side ka 
quicksort(arr,s,p-1);
// sort karege right side ka
quicksort(arr, p + 1,e);

}
int main(){
int arr[]={2,6,3,4,8,7};
int n=6;
quicksort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

return 0;

}