#include<iostream>
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
    int final_arr[len1+len2+1];
    int i=0,j=0,k=0;
    while(i<len1 || j<len2)
    {
        if(arr[i]==sec_arr[j])
        {
            final_arr[k]=arr[i];
            i++;
            j++;
        }
        else if(arr[i]<sec_arr[j])
        {
            final_arr[k]=arr[i];
            i++;
        }
        else if(arr[i]>sec_arr[j])
        {
            final_arr[k]=sec_arr[j];
            j++;
        }
        k++;
    }
    cout<<endl;
    for(int m=0;m<(len1+len2);m++)
    {
        cout<<final_arr[m];
    }

}
