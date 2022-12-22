#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int a[s];
    for (int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    for (int i =1 ;i <s;i++ )
    {
        int temp = a[i];
        int j=i-1;
        while (j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for (int i=0;i<s;i++)
    {
        cout<<a[i];
    }
}