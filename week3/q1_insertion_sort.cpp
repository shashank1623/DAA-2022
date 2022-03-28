
// C++ program for insertion sort
#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
 
/* Function to sort an array using insertion sort*/
void insertionSort(vector <int> arr, int n)
{
    int i, key, j;
    int count = 1;
    int comp= 0;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        count = count + j;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            comp++;
            
        }
        arr[j + 1] = key;
    }
    cout<<"cmparison: "<<comp<<endl;
    cout<<"shifts: "<<count;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        insertionSort(arr,n);
        
        
    }
    
    return 1;
}
