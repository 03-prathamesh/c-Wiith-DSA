#include<iostream>
using namespace std;


// This Program or code is used to find the binary representation of a number .
// this recursive function will print binary equivalent of a number 
//  this process is same as decimal to binary conversion 
// we keep devide the nu mber  by 2 and we keep get reaminder of a number 

 void bin(int n){

    if(n==0){

        return ;
    }
 
     bin(n/2);

       
       cout<<n%2<<" ";



 }


int main()
{

int p;
cout<<"Enter a Number: "<<endl;
cin>>p;




 bin(p);

   return 0;
 }