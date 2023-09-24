#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    double r1=(double)a.first/a.second;
    double r2 = (double)b.first / b.second;
    return r1>r2;
}

  double fknapS(int w,pair<int,int>arr[],int n ){
    sort(arr,arr+n,cmp);
        double res=0.0;
    for(int i=0;i<n;i++){
        if(arr[i].second<=w){ 
            res+=arr[i].first;
            w=w-arr[i].second;
        }else{
            res+=arr[i].first*(double)w/arr[i].second;
            break;
        }


    }
    return res;
  }

  int main(){
pair<int,int>arr[]={
    {50,600},{20,500},{30,400}
};
double sk= fknapS(70,arr,3);
cout<<sk<<endl;


    return 0;
  }