#include<bits/stdc++.h>
using namespace std;

int fac(int n){


    //base case
    if(n<=1){
        return 1;
    }else{
        //factorial ke liye
       return n*fac(n-1);

    // sum ke liye 
    return n+ fac(n-1);
    }
    
}


int main(){

int ans=fac(6);
cout<<ans<<endl;

}