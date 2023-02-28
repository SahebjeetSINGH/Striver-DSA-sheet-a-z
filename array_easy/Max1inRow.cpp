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
    int index;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(a[j][i]==1)
            {
                index=j;
                cout<<index+1;
                exit(0);
            }
        }
    }
    
}