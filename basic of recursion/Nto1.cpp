#include<bits/stdc++.h>
using namespace std;
void print(int i,int n)
{
    if(i>n)
    {
        return;
    }
    print(i+1,n);
    cout<<i;
}




int main()
{
    int i=1,n;
    cin>>n;
    print(i,n );
}