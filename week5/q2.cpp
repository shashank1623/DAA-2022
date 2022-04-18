
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void sum_pairs(vector <int> arr,int key)
{
    sort(arr.begin(),arr.end());
    
    cout<<endl;
    int i = 0;
    int j = arr.size()-1;
    int flag = 0;
    while(i<=j)
    {
        if(arr[i]+arr[j]==key)
        {
            cout<<arr[i]<<" "<<arr[j]<<",";
            flag = 1;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]>key)
        {
            j--;
        }
        else if(arr[i]+arr[j]<key)
        {
            i++;
        }
    }
    
    cout<<endl;
    if(flag==0)
    {
        cout<<"NO such parirs exits"<<endl;
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
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k;
        cin>>k;
        
        sum_pairs(arr,k);
    }
}
