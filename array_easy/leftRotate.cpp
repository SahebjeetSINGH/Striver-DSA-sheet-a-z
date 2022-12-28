#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int s;
    cin>>s;
    int a[s];
    for(int i =0 ;i <s; i++)
    {
        cin>>a[i];
    }
    int temp= a[0];
    for (int i =0; i<s;i++)
    {
        a[i]=a[i+1];
    }
    a[s-1]=temp;
     for(int i =0 ;i <s; i++)
    {
        cout<<a[i]<<" ";
    }
}