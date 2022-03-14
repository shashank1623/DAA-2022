#include <iostream>
using namespace std;

int findKey(int *arr , int n, int key)
{
    int index = 0;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            index=i+1;
            return index;
        }
    }
    index = i;
    return index;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int *arr = new int(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key;
        cin>>key;
        int index = findKey(arr , n ,key);
        if(index>0)
        {
            cout<<"Present"<<" "<<index<<endl;
        }
        else
        {
            cout<<"Not Present "<<index<<endl;
        }
    }
}