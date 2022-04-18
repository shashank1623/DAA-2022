/*

II. Given an already sorted array of positive integers, design an algorithm and implement it using a 
program to find whether given key element is present in the array or not. Also, find total number 
of comparisons for each input case. (Time Complexity = O(nlogn), where n is the size of input)
*/
#include <iostream>
#include <vector>
using namespace std;

void binary_search(vector <int> arr, int key)
{
    int si = 0;
    int ei = arr.size()-1;
    int mid = si + (ei - si)/2;
    int comp = 1;
    while(si<=ei)
    {
        if(arr[mid]==key)
        {
            cout<<"Present "<<comp<<endl;
            return ;
        }
        else if(key>arr[mid])
        {
            si = mid + 1;
        }
        else
        {
            ei = mid -1;
        }
        comp++;
        mid = si + (ei - si)/2;
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
        int key;
        cin>>key;
        binary_search(arr,key);
    }
    
    
}

