//  https://onlinegdb.com/uh3eE2dGE



#include <iostream>
#include <vector> 
#include<math.h>
using namespace std;

int main()
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
   int count = 1;
   if(arr[0]==key)
   {
       cout<<"present "<<count<<endl;
   }
   else
   {
       count++;
       int p =2;
       int j=2;
       for(;j<n&&arr[j]<=key;j = pow(2,p++))
       {
           if(arr[j]==key)
           {
               cout<<"present "<<count<<endl;
               break;
           }
           count++;
           
       }
       if(j>n||arr[j]<key)
       {
           cout<<"Not present "<<count<<endl;
       }
   }
    return 0;
}

