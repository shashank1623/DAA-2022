
#include<iostream>
#include <vector>
using namespace std;

int findSeq(vector <int> arr , int n)
{
  if(n<=2)
  {
    return 0;
  }
  if(n<=3)
  {
      if(arr[0]+ arr[1]==arr[2] )
      {
        cout<<1<<" "<<2<<" "<<3<<endl;
        return 1;
      }
     return 0;
  }
  
    int i,j,k;
    
    for(i=0;i<n;i++)
    {
        k=i+2;
        for(j=i+1;j<n-2;j++)
        {
            if(arr[i]+arr[j]==arr[k])
            {
                cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                return 1;
            }
          k++;
        }
    }
    return 0;
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
        int res = findSeq(arr , n);
        if(res == 0)
        {
            cout<<"No sequence found"<<endl;
        }
    }
}
