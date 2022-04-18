#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int kth_smallest(vector <int> arr, int k)
{
    int len = arr.size();
    sort(arr.begin(),arr.end());
    return arr[k-1];
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
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k;
        cin>>k;
        
        int res = kth_smallest(arr,k);
        cout<<res<<endl;
    }
}