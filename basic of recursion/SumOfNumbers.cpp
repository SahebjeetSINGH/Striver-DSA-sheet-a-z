#include<bits/stdc++.h>
using namespace std;
int sum (int n,int s)
{
    if(n<0)
    {
        return s;
    }
    
    sum(n-1,s+n);

}
int main()
{
    int s=0;
    int n;
    cin>>n;
    cout<<sum(n,s);
}