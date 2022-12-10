#include<bits/stdc++.h>
using namespace std;

int main()
{
  int x,y, count=0;
  cin>>x;

  do
  {
    y = x/10;
    x=y;
    count++;
  }while (y!=0);
  cout<<count;
}