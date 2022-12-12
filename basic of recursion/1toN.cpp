#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(i>n)
    {
        return;
    }
     cout<<i;
     print(i+1,n);
    }


int main()
{
  int i=1;
  int n;
  cin>>n;
  print(i,n);
}