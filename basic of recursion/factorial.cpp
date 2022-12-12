#include<bits/stdc++.h>
using namespace std;
int fact(int i,int n)
{
    if (n==0)
    {
        return i;
    }
    i*=n;
    fact(i,n-1);
}
int main()
{
  int i=1,n;
  cin>>n;
  cout<<fact(i,n);
}