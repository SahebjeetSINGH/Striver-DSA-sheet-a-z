#include<bits/stdc++.h>
using namespace std;

int insert(int a[],int s, int j)
{
    if(j<s)
    {
     int temp = a[j];
        int i=j-1;
        while (i>=0 && a[i]>temp)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=temp;
    
    insert(a,s,j+1);
    }
    
}


int main()
{
    int s;
    cin>>s;
    int a[s];
    for (int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    insert(a,s,1);
    for (int i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
}