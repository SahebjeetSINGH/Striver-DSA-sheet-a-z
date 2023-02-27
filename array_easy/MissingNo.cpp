#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int a[s-1];
    int sum=0;
    for(int i=0;i<s-1;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<< (s*(s+1)/2) - sum; 
}