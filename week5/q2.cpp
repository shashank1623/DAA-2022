/*

Given an unsorted array of integers, design an algorithm and implement it using a program to 
find whether two elements exist such that their sum is equal to the given key element. (Time 
Complexity = O(n log n))

Input Format: The first line contains number of test cases, T. For each test case, there will be two input 
lines. First line contains n (the size of array). Second line contains space-separated integers describing 
array. Third line contains key

Output Format: The output will have T number of lines. For each test case, output will be the elements 
arr[i] and arr[j] such that arr[i]+arr[j] = key if exist otherwise print 'No Such Elements Exist”.
*/
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
