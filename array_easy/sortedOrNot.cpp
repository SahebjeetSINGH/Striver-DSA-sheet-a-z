#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int s;
    cin>>s;
    int a[s];
    int prev=INT_MIN;
    int i;
    for( i=0;i<s;i++)
    {
        cin>>a[i];
        if(a[i]>=prev)
        {
            prev=a[i];
            
        }
        else{
            cout<<"n";
            break;
        }
    }
    if(i==s)
    {
        cout<<"y";
    }
} 