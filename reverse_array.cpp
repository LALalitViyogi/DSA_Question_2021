#include<iostream>
using namespace std;

void Reverse(int arr[],int len)
{
    int start=0;
    int last=len-1;

    while(start<last)
    {
        int temp = arr[start];
        arr[start]=arr[last];
        arr[last]=temp;

        start++;
        last--;
    }
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
    Reverse(arr,len);
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}
