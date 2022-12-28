#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int a[s];
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<s;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        if(a[i]>max2 && a[i]<max1)
        {
            max2=a[i];
        }
    }
    cout<<min(max1,max2);
   
    
}
