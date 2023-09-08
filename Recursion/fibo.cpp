#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{

    if (n <= 1) // base case
        return 1;

    return fib(n - 1) + fib(n - 2); // recurrence relation
}

int main(){

int ans=fib(6);
cout<<ans<<endl;

}