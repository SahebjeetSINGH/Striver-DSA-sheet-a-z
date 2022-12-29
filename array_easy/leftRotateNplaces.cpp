#include<bits/stdc++.h>
using namespace std;


    int leftRotate(int a[],int n, int l)
    {
        while (n<=l)
        {
            int temp=a[n];
            a[n]=a[l];
            a[l]=temp;
            n++;
            l--;
        }
        
    }
    int main()
    {
        int s;
        cin>>s;
        int a[s];
        for(int i=0;i<s;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        leftRotate(a,0,k-1);
        leftRotate(a,k,s-1);
        leftRotate(a,0,s-1);
        for(int i=0;i<s;i++)
        {
            cout<<a[i]<<" ";
        }
    }