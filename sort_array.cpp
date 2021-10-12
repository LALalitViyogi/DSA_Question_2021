#include<iostream>
using namespace std;

int main()
{
    cout<<"-- Sorting Array ----"<<endl;
    int len;
    cout<<"Enter Length :";
    cin>>len;

    cout<<endl;
    cout<<"---- ENTER ARRAY ------"<<endl;

    int arr[len];

    for(int i=0;i<len;i++)
    {
        cout<<"Enter Number :";
        cin>>arr[i];
    }

    int i=0,j=0;
    while(j<len)
    {
        if(arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }
    j=len-1;
    i=len-1;
    while(j>=0)
    {
        if(arr[j]==2)
        {
            swap(arr[i],arr[j]);
            i--;
        }
        j--;
    }
    cout<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"--- END OF PROGRAM ---";
}
