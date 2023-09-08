#include<bits/stdc++.h>
using namespace std;

int fabi(int n){

if(n==1||n==0){
    return n;
}else{
    return fabi(n-1)+fabi(n-2);
}


}

int main(){
int n;
cin>>n;
int i=0;
  
  while (i<n)
  {
   cout<<" "<<fabi(i);
   i++;
  }
  
return 0;
}