#include<bits/stdc++.h>
using namespace std;

void reverse(int u, int a[] , int l)
{
    if ( u >= l/2)
    {
        return;
    }
    swap(a[u],a[l-u-1]);
    reverse(u+1,a,l);
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
  reverse(0,a,s);
  for(int i=0;i<s;i++)
  {
    cout<<a[i];
  }
}