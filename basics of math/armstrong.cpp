#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int num, sum=0,digit=0;
  cin>>num;
  int temp=num , temp1=num;
  while(temp!=0)
  {
    temp=temp/10;
    digit++;
  }
  int y;
  while(num!=0)
  {
    y=num%10;
    sum+=pow(y,digit);
    num=num/10;
  }
  if(sum==temp1)
  {
    cout<<"yes";
  }
  else
  cout<<"no";

}
