#include<bits/stdc++.h>
using namespace std;
void stocks(int a[],int s)
{
    int minimum=INT_MAX;
    int maxpro=INT_MIN;
    int i=0;
    while(i<s)
    {
       minimum=min(a[i],minimum);
       maxpro=max(maxpro,a[i]-minimum);
       i++;
    
    }
    cout<<maxpro;
}
int main()
{
 int  s;
 cin>>s;
 int a[s];
 for(int i=0;i<s;i++)
 {
    cin>>a[i];
 }  
 stocks(a,s);
}