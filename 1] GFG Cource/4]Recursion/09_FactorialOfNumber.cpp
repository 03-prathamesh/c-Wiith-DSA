#include<iostream>
using namespace std;

// factorial of a program using Recursion 

int fact(int n){



    if(n==0){


        return 1;
    }
   
  return  n*fact(n-1); 





}


int main()
{

int t;
cout<<"Enter the Number You Want: "<<endl;
cin>>t;


  cout<<fact(t)<<endl;
   return 0;
 }