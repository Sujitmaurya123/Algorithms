//galat hai ediet karna hai kuch to 
#include<bits/stdc++.h>
using namespace std;
void printarray(int*a,int n){
    for (int i = 0; i < n; i++)
    {
        cout<< a[i]<< " ";
    }
    cout<<endl;
}
void insertion(int*a,int n){
    int j;
    for (int i = 1; i <= n; i++)
    {
       int temp = a[i];
        j = i - 1;

        while (temp < a[j] && (j >= 0))
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}
int main(){
    int a[]={2,7,4,9,5};
    int n=5;
    printarray(a,n);
    insertion(a,n);
    printarray(a, n);
    return 0;
}