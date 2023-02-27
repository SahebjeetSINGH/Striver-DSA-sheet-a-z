#include<bits/stdc++.h>
using namespace std;                // IF ARRAY IS SORTED
int main()
{
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    int i=0;
    while(i<s)
    {
        if(a[i]==a[i+1])
        {
            i+=2;
        }
        else
        {
            cout<<a[i];
            break;
        }
    }
     
}