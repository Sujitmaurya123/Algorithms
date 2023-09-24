#include<bits/stdc++.h>
using namespace std;

struct Item
{
    int value;
    int weight;
};

static bool cmp(pair<double,Item>a,pair<double,Item >b){
    return a.first>b.first;
}

double fractionalKnapsack(int W ,Item arr[],int n){
    vector<pair<double,Item>>v;
for(int i=0;i<n;i++){
    double perUnitValue=(1.0*arr[i].value)/arr[i].weight;
    pair<double,Item>p=make_pair(perUnitValue,arr[i]);
    v.push_back(p);
}

sort(v.begin(),v.end(),cmp);
double totalValue=0;
for(int i=0;i<n;i++){
    if(v[i].second.weight>W){
        //toh main sirf fraction le skta hu
        totalValue+=W*v[i].first;
        W=0;
    }else{
        totalValue+=v[i].second.value;
        W=W-v[i].second.weight;
    }
}
return totalValue;
}

int main()
{
int W = 50;                                    // Knapsack capacity
Item arr[] = {{60, 10}, {100, 20}, {120, 30}}; // Array of items, where each item has a value and weight
int n = sizeof(arr) / sizeof(arr[0]);          // Number of items

double maxValue = fractionalKnapsack(W, arr, n);

cout << "Maximum value that can be obtained = " << maxValue << endl;

return 0;
}