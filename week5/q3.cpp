/*
III. You have been given two sorted integer arrays of size m and n. Design an algorithm and 
implement it using a program to find list of elements which are common to both. (Time Complexity 
= O(m+n))

Input Format: First line contains m (the size of first array). Second line contains m space-separated
integers describing first array. Third line contains n (the size of second array). Fourth line contains n 
space-separated integers describing second array.

Output Format: Output will be the list of elements which are common to both.
*/
#include<iostream>
#include<vector>

using namespace std;

void common_elements(vector <int> arr,vector <int> arr1,vector <int> res)
{
    int i =0;
    int j =0;
    while(i<arr.size()&&j<arr1.size())
    {
        if(arr[i]==arr1[j])
        {
            res.push_back(arr[i]);
            i++;
            j++;
        }
        else if(arr[i]>arr1[j])
        {
            j++;
        }
        else if(arr[i]<arr1[j])
        {
            i++;
        }
    }
    
     for(int i = 0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    //size of first array;
    int n;
    cin>>n;
    
    vector <int> arr(n);
    vector <int> res;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    //size of second array
    int m;
    cin>>m;
    
    vector <int> arr1(m);
    for(int i =0;i<m;i++)
    {
        cin>>arr1[i];
    }
    
    common_elements(arr,arr1,res);
}
