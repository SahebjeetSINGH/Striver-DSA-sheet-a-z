#include<bits/stdc++.h>
using namespace std;

bool palin(int i,string &s)
{
if (i>s.size()/2)
 {
    return true;
 }
 if( s[i] != s[s.size()-i-1])
 {
    return false;
 }
 palin(i+1,s);
}

int main()
{
 string s;
 cin>>s;
 cout<<palin(0,s);
}