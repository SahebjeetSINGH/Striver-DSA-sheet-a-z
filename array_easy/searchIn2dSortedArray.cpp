#include<bits/stdc++.h>
using namespace std;
int main()
{
      int x,y;
    cout<<"Rows:";
    cin>>x;
    cout<<"Colums:";
    cin>>y;
    int a[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
    }
    int i =0 ,j = y-1;
    int target;
    cin>>target;
    while(i<= x && j>=0)
    {
        if(a[i][j]==target)
        {
            cout<<"("<<i<<","<<j<<")";
        }
        if(target<a[i][j]){
            j--;
        }
        else
        i++;
    }
}