#include<iostream>
using namespace std;


void PrintNum(int n){


   if(n==0){


       return;
   }

   cout<<n<<"    ";


   PrintNum(n-1);


}


int main()
{


cout<<"Enter The Value Of p: "<<endl;
int  p;
cin>>p;


//  for(int i=n;i>0;i--){



//      cout<<i<<"  ";
       
//  }
  PrintNum(p);

   return 0;
 }