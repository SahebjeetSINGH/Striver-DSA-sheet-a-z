#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int maxi=INT_MIN;
    int sum=0;
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<s;i++)
    {
    sum+=a[i];
    maxi=max(sum,maxi);
    if(sum<0)
    {
        sum=0;
    }
    }
    cout<<maxi;
}