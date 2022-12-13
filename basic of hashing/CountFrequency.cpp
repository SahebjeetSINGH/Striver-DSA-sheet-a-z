#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n = 1e7;
    vector<int> hash(n,0);

    int s;
    cin>>s;
    int max=0 , maxi, min=1e7,mini;
    int a[s];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
        hash[a[i]]++;
        if (max<hash[a[i]]){
            max=hash[a[i]];
            maxi=i;
        }
        else{
            min=hash[a[i]];
            mini=i;
        }

    }
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<" "<<hash[a[i]]<<"\n";
    }
    


}