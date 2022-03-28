
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;



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
        
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        int flag = 0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                flag=1;
                break;
            }
        }
        
        if(flag==1)
        {
            cout<<"YES"<<endl;
            break;
        }
        cout<<"NO"<<endl;
        
    }

    return 0;
}