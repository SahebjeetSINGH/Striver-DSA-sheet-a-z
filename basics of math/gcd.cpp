#include<bits/stdc++.h>
using namespace std;

int gcd ( int a, int b)
{
    // cout<<a<<b; 
    if (b==0)
    {
        return a;
    }
    else
    return gcd(b , a % b );
}



int main()
{
    int a,b,ans;
    cin>>a>>b;
    ans =gcd( max(a,b), min(a,b));
    cout<<ans;
}