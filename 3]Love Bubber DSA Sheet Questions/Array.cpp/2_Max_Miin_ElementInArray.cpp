#include<iostream>
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

int  mx=arr[0];
int  mn=arr[0];

 for(int  i=1;i<n;i++){

      if(mx<arr[i]){


          mx=arr[i];
      }
      
     

 }
 for(int  j=1;j<n;j++){

      if(mn>arr[j]){


          mn=arr[j];
      }
      
     

 }

 cout<<"Printing Maximum  and Minimum Elements: "<<endl;

cout<<"Maximum Element is: "<<mx<<endl;
cout<<"Minimum Element is: "<<mn<<endl;


   return 0;
 }