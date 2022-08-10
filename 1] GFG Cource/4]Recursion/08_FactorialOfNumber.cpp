#include<iostream>
using namespace std;

// recursive program to find sum of n natural n numbers.


int add(int n ){

if(n==0){


    return n;
}
else{

     return  n+add(n-1);
      
}





}


int main()
{


int n;
cout<<"Enter a Number: "<<endl;
cin>>n;


 int c=add(n);
 cout<<c<<endl;

   return 0;
 }