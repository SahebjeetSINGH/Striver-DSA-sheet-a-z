#include<bits/stdc++.h>
using namespace std;

void LongestSub(int a[],int s,int k)
{
   int maxi=0;
   for(int i=0;i<s;i++)
   {
    int sum=0;
    for(int j=i;j<s;j++)
    {
        sum+=a[j];
        if(sum==k)
        {
            maxi=max(maxi,j-i+1);
        }
    }
   } 
   cout<<maxi;
}

int main()
{
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    LongestSub(a,s,k);
}