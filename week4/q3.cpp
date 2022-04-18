/* Given an unsorted array of integers, design an algorithm and implement it using a program to find 
Kth smallest or largest element in the array. (Worst case Time Complexity = O(n))


Input Format: The first line contains number of test cases, T. For each test case, there will be three 
input lines. First line contains n (the size of array). Second line contains space-separated integers 
describing array. Third line contains K.


Output Format: The output will have T number of lines. For each test case, output will be the Kth 
smallest or largest array element. If no Kth element is present, output should be “not present”
*/
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
