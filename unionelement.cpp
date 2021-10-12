#include<iostream>
#include<set>
using namespace std;


int main()
{
    cout<<"---- UNION OF ELEMENT ----"<<endl;
    int len1;
    int len2;
    cout<<"Enter Length1 :";
    cin>>len1;
    cout<<"Enter Length2 :";
    cin>>len2;

    cout<<endl;
    cout<<"---- ENTER first ARRAY ------"<<endl;

    int arr[len1];

    for(int i=0;i<len1;i++)
    {
        cout<<"Enter Number :";
        cin>>arr[i];
    }
    cout<<"---- ENTER Second ARRAY ------"<<endl;
    int sec_arr[len2];
    for(int i=0;i<len2;i++)
    {
        cout<<"Enter Number :";
        cin>>sec_arr[i];
    }

    set<int> one(arr,arr+len1);
    for(int i=0;i<len2;i++)
    {
        one.insert(sec_arr[i]);
    }
    cout<<"UNION OF ARRAY :";
    for(auto i=one.begin();i!=one.end();i++)
    {
        cout<<*i<<" ";
    }
}
