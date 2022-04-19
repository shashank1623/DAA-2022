//partially coded

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partion(vector <int> &arr, int p ,int r)
{
    int x = arr[r];
    int i = p-1;
    
    for(int j = p; j<=r-1;j++)
    {
        if(arr[j]<=x)
        {
            i = i+1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

void quick(vector <int> &arr, int p, int r)
{
    if(p<r)
    {
        int q = partion(arr,p,r);
        quick(arr,p,q-1);
        quick(arr,q+1,r);
    }
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
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        quick(arr,0,n-1);
        for(int i = 0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

