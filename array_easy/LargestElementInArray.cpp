#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s , in;
    int max=INT_MIN;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
            in = i;
        }
    }
    cout<<a[in];
}