#include<iostream>
using namespace std;

int firstoccur(int arr[],int len,int k)
{
    int high=len-1;
    int low=0;

    while(low<high)
    {
        int mid = (high+low)/2;

        if(arr[mid]==k)
        {
            if(arr[mid-1]!=k)
            {
                return mid;
            }
            else
            {
                high=mid-1;
            }
        }
        else if(arr[mid]>k)
        {
            high=mid-1;
        }
        else if(arr[mid]<k)
        {
            low=mid+1;
        }
    }
}
int lastoccur(int arr[],int len,int k)
{
    int high=len-1;
    int low=0;
    while(low<high)
    {
        int mid = (high+low)/2;

        if(arr[mid]==k)
        {
            if(arr[mid+1]!=k)
            {
                return mid;
            }
            else
            {
                low=mid+1;
            }
        }
        else if(arr[mid]>k)
        {
            high=mid-1;
        }
        else if(arr[mid]<k)
        {
            low=mid+1;
        }
    }
}
int main()
{
    int arr[10]={0,2,3,6,9,10,10,10,10,25};
    cout<<firstoccur(arr,10,10)<<endl;
    cout<<lastoccur(arr,10,10)<<endl;

}
