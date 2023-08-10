#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[h]; //? always last element
    int i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            ++i;
            swap(arr[i], arr[j]); //? all smaller elements comes before pivot
        }
    }
    swap(arr[i + 1], arr[h]); //? swaps pivot element with next bigger element after i
    return (i + 1);
}


void quickSort(int  arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
    return;
}



int main()
{
    int arr[] = {2, 6, 3, 4, 8, 7};
    int n = 6;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}