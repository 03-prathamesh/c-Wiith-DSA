#include<iostream>
// #include<algorithm>
using namespace std;

  

int main()
{

cout<<"Enter The size of an Array: ";
 int n;
 cin>>n;


 int arr[n];

 
 for(int i=0;i<n;i++){


   cout<<"Enter The Array Elements: "<<endl;
   cin>>arr[i];

 }

  int start=0;
  int end=n-1;


  while(start<end){    // direct implementation of the swap function.

     int temp=arr[start];
     arr[start]=arr[end];
     arr[end]=temp;

      start++;
      end--;
  }

  cout<<"Reverse arrray Is: "<<endl;

  for(int i=0;i<n;i++){



      cout<<arr[i]<<"   ";
  }

   return 0;
 }