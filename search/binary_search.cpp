#include<iostream>
using namespace std;
int main()
{
  int arr[500],first=0,mid=0,last,search,n,i;
  
  cout<<"enter the size of array:";
  cin>>n;
  
  cout<<"enter  integer asecnding array:";
  
  for(i=0;i<n;i++)
  {
    cin>>arr[i];  
  }
  
  cout<<"enter the value of search:";
  cin>>search;
  
  last=n-1;
  
  while(first<=last)
  {
      mid=(first+last)/2;
      
      if(arr[mid]<search)
      {
          first=mid+1;
      }
      else if(mid==search)
      {
          cout<<" found at a location  "<<search<<mid+1;
          break;
      }
      else
      {
          last=mid-1;
      }
  }
  if(first>last)
  {
      cout<<" is not found"<<search;
  }
  
}