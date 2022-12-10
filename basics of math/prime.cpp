#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int i;
    for( i=2 ; i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            break;
        }
    }
    if(i==int(sqrt(a)))
    {
        cout<<"not prime";
    }
    else
    cout<<"prime";
}