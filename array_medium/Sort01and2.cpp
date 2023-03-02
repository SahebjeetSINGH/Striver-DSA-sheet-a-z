#include<bits/stdc++.h>
using namespace std;

void Sorting(int a[],int s)
{
  int low=0, mid=0, high=s-1 ;
  while (mid<=high)
  {
     if(a[mid]==0)
     {
        swap(a[low],a[mid]);
        ++low;
        ++mid;  
     }
     else if(a[mid]==1)
     {
        ++mid;  
     }
     else if(a[mid]==2)
     {
        swap(a[mid],a[high]);
        --high;
     }
     
  }
   for(int i=0;i<s;i++)
    {
        cout<<a[i];
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
    Sorting(a,s);
}