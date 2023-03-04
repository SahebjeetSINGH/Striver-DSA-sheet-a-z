#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
     int count = 0;
        int candidate = 0;

        for (int i=0;i<s;i++) {
            if (count == 0) {
                candidate = a[i];
            }
            if(a[i]==candidate) count += 1; 
            else count -= 1; 
        }
        cout<<candidate;
}