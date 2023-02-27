#include<bits/stdc++.h>
using namespace std;

void ShiftZero(int a[],int s)
{
    int i=0,j=1;
    cout<<"\nshifted :/n";
    while(i<s && j<=s)
    {
        if(a[i]==0)
        {
        if(a[j]!=0)
        {
            int temp =a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j++;
        }
        else
        j++;
        }
        else
        i++;
        j++;
    }
    for(int x=0; x<s ;x++)
    {
        cout<<a[x]<<" ";
    }
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
    ShiftZero(a,s);
}