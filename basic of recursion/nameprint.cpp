#include<bits/stdc++.h>
using namespace std;
void nameprint(int n, string name)
{ 
      if (n==0)
      {
        return;
      }
      nameprint(n-1,name);
            cout<<name <<" "<<n<<" ";

}


int main()
{ 
    int n ;
    string name;
    cin>>n;
    cin>>name;
    nameprint(n,name);

}