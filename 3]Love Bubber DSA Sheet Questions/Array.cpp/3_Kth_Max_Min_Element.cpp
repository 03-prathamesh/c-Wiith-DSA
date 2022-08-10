#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
 int  n,k;
 cout<<"Enter The Array  element  And Value  of K : "<<endl;
 cin>>n>>k;


 int arr[n];

 for(int i=0;i<n;i++){

    cin>>arr[i];

 }

   sort(arr,arr+n);

    int max=arr[n-k];
    int min=arr[k-1];

  cout<<" Kth Max Element is: "<<max<<endl;
  cout<<" kth  Min Element  is: "<<min<<endl;


   return 0;
 }