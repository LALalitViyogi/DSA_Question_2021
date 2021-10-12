#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
    cout<<"-- Kth Smallest Element ----"<<endl;
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
    int k;
    cout<<endl;
    cout<<"Enter K value :";
    cin>>k;
    cout<<endl;

    set<int> one(arr,arr+len);
    set<int> :: iterator itr = one.begin();
    advance(itr,k-1);
    cout<<"K Smallest Value :"<<*itr<<endl;

}
