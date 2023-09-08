#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size ,int key){
    int start=0;
    int end=size-1;
    //int mid=(start+end)/2;
        int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right wala part
        if(key>arr[mid]){
          start=mid+1;
        }else{// key choti hoto key<arr[mid]
            end=mid-1;
        }
        mid = start + (end - start) / 2;
        
    }
    // nahi match karne par -1 print karega
    return -1;
}


 int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    // int indexeven=binarySearch(even,6,18);
    // cout<<"Index of 18 is"<< " "<< indexeven<<endl;

    int indexodd = binarySearch(odd, 5, 6);
    cout << "Index of 6 is"
         << " " << indexodd << endl;

    return 0;
    
 }