#include <iostream>
#include <vector>
using namespace std;
int findFreq(vector <int> arr, int n , int key)
{
  if(arr.size()==0)
  {
    return 0;
  }
  int freq=0;
  int mid;
  int start =0, end = n-1;
  while(start <= end)
    {
      mid = (start + end) / 2;
      
      if(arr[mid] > key)
      {
        end = mid - 1;
      }
      else if(arr[mid] < key)
      {
        start = mid + 1;
      }
      else
      {
        
        freq = 1;
        int fmid = mid + 1;
        if(fmid!=n)
        {
          while(fmid <= end)
          {
            if(arr[fmid]!=key)
            {
              break;
            }
              freq++;
            fmid ++;
          }
        }
        int bmid = mid -1;
        while(bmid >= start)
          {
            if(arr[bmid]!=key)
            {
              break;
            }
            freq++;
            bmid--;
          }
        
        break;
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
      int number_of_elements = findFreq(arr , n , key);
      cout<<endl;
      if(number_of_elements==0)
      {
          cout<<key<<"-"<<"Not present";
      }
      else
      {
        cout<<key<<"-"<<number_of_elements<<endl;
      }
    }
}
