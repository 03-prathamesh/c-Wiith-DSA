#include<iostream>
using namespace std;

void rec(int n){

   if(n==0){

       return;
   }


    cout<<n<<endl;


    rec(n-1);

    // cout<<n<<endl;


}

int main()
{


 int n;
 cout<<"Entter The Value of n: "<<endl;
 cin>>n;

 rec(n);

   return 0;
 }