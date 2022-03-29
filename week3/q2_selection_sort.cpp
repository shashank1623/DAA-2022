#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

void selection_sort(vector <int> arr, int n)
{
    int comp = 0;
    int swaps= 0;
    
    for(int i=0;i< n;i++)
    {
       int min = arr[i];
       int index=i;
       int flag = 0;
       comp = comp + i;
       for(int j=i+1;j<n;j++)
       {
           if(min>arr[j])
           {
               min = arr[j];
               index = j;
               flag = 1;
               
           }
       }
       if(flag==1)
       {
           int temp = arr[i];
           arr[i] = arr[index];
           arr[index]= temp;
           swaps++;
       }
      
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
    cout<<"comparison: "<<comp<<endl;
    cout<<"swaps: "<<n-1;
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

        selection_sort(arr,n);
        
        
    }
}
