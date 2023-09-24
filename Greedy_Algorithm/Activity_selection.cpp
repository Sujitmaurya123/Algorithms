#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
    return(a.second<b.second);
}

int maxActivities(pair<int,int>arr[],int n){
    sort(arr,arr+n,cmp);
    int prev=0;
    int res=1;
    for(int curr=1;curr<n;curr++){
        if (arr[prev].second <= arr[curr].first)
        {
            res++;
            prev=curr;
        }
    }
    return res;
}

int main(){
    pair<int,int>arr[]={
        //  {1,3},{2,4},{3,8},{10,11}

        {2,3},{1,4},{5,8},{6,10}
    };

int sk=maxActivities(arr,4);
cout<<sk<<endl;
return 0;
}