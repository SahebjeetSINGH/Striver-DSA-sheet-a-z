#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x , y, z=0;
    cin>>x;
    do 
    {
      y=x%10;
      z=z*10+y;
      x=x/10;
    }while(x!=0);
    cout<<z;
}