#include<bits/stdc++.h>
using namespace std;

int main()
{
  int s;
  cin>>s;
  int a[s];
  for(int i=0;i<s;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<s;i++)
  {
    for(int j=0;j<s;j++)
    {
        if (a[j]>a[j+1])
        {
            int temp;
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
  }
  for(int i=0;i<s;i++)
  {
    cout<<a[i];
  }
}