#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    int linear(int a[],int s, int x)
    {
        int i;
        for( i=0;i<s;i++)
        {
            if(a[i]==x)
            {
                return i+1;
            }
            
        }
        if(i>=s)
        {
            return -1;
        }
    }
    
};
int main()
{
    int s;
    cin>>s;
    int a[s];
    for(int i =0;i<s;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    solution obj;
    cout<<obj.linear(a,s,x);
}