#include<bits/stdc++.h>
using namespace std;
void MaxOne(int a[],int s)
{
    int i=0;
    int count=0 , maximum=INT_MIN ;
    while(i<s)
    {
        if(a[i]==1)
        {
            count++;
            maximum=max(maximum,count);
            i++;
        }
        else
        {
            count=0;
            i++;
        }
    

    }
    cout<<maximum;
}
int main()
{
    int s;
    cout<<"size :";
    cin>>s;
    int a[s];
    cout<<"array:";
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    MaxOne(a,s);
}