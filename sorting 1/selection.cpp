#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i  = 0 ;i <n; i ++)
    {
        cin>>a[i];
    }
    for(int i = 0 ; i<n; i++)
    {
            int min=i;
            
        for(int j=i+1;j<n;j++)
        {
            
            
            
            if (a[min]>a[j])
            {
               min=j;

            }
             int temp;
             temp=a[i];
             a[i]=a[min];
             a[min]=temp;
        }
              
    }
    for(int i  = 0 ;i <n; i ++)
    {
        cout<<a[i];
    }
}