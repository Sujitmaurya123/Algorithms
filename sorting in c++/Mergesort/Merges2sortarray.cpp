//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to merge the arrays.
    void merge(long long arr1[], long long arr2[], int n, int m)
    {
        // code here
        int i = n - 1, j = 0;
        while (i >= 0 && j < m)
        {
            if (arr2[j] < arr1[i])
            {
                swap(arr2[j], arr1[i]);
                i--;
                j++;
            }
            else
            {
                break;
            }
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
    }
};

//{ Driver Code Starts.

int main()
{

    

    
        // int n, m;
        // cin >> n >> m;

        // long long arr1[n], arr2[m];

        // for (int i = 0; i < n; i++)
        // {
        //     cin >> arr1[i];
        // }

        // for (int i = 0; i < m; i++)
        // {
        //     cin >> arr2[i];
        // }
    long long arr1[4]={1,3,5,7}, arr2[5]={0,2,6,8,9};
    Solution ob;
    ob.merge(arr1, arr2, 4, 5);

    for (int i = 0; i < 4; i++)
        cout << arr1[i] << " ";

    for (int i = 0; i < 5; i++)
        cout << arr2[i] << " ";

    cout << endl;
    

    return 0;
}

// } Driver Code Ends