#include<iostream>
#include <vector>
using namespace std;
int findPairs(vector <int> arr , int n , int key)
{
    int freq =0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]>arr[j]?arr[i]-arr[j]:arr[j]-arr[i])==key)
            {
                freq++;
            }
        }
    }
    return freq;
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
        int key;
        cin>>key;
        int pairs = findPairs(arr, n ,key);
        if(pairs>0)
        {
            cout<<pairs<<endl;
        }
        else
        {
            cout<<"No pairs"<<endl;
        }
        
    }
}
