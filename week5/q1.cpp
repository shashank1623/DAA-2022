#include<iostream>

using namespace std;

int main()
{
    int temp[256]={0};
    char arr[10];
   
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
        temp[arr[i]]++;
    }
    int max = 0;
    for(int i =0;i<256;i++)
    {
       if(temp[i]>max)
       {
           max = temp[i];
       }
    }
    int k;
    for(k =0;k<256;k++)
    {
       if(temp[k]==max)
       {
           break;
       }
    }
    if(max!=1)
    {
    char c = k;
    cout<<c<<" ";
    cout<<""<<max;
    }
    else
    {
        cout<<"NO duplicate present";
    }
  
}