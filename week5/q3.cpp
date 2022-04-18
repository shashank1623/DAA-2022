
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
