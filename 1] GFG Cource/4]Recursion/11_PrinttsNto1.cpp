#include<iostream>
using namespace std;

//Time complecity is o(n);
// Space complexity 

void fun(int n){

  if(n==0){

      return;
  }
 

   cout<<n<<"   ";

   fun(n-1);





}

int main()
{


int t;
cout<<"Enter the value of t : "<<endl;
cin>>t;

fun(t);
   return 0;
 }