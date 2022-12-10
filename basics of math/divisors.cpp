#include<bits/stdc++.h>
using namespace std;
int main()
{
  int num;
  cin>>num;
  int i=1;
  while(i<=num/2)
  {
    if((num)%i==0)
    {
        cout<<i<<" ";
    }
    i++;
  }
  cout<<num;
}