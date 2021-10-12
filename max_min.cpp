#include<iostream>
using namespace std;

void min_max(int arr[],int len)
{
    int maxi=arr[0];
    int mini=arr[0];
    for(int i=1;i<len;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
        else if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }

    cout<<"Max :"<<maxi<<endl;
    cout<<"Min :"<<mini<<endl;
}

int main()
{
    int len;
    cout<<"Enter LEN :";
    cin>>len;

    cout<<endl;
    cout<<" ----- Enter Array ----------"<<endl;
    int arr[len];

    for(int i=0;i<len;i++)
    {
        cout<<"Enter Num:";
        cin>>arr[i];
    }
    min_max(arr,len);

    return 0;
}
