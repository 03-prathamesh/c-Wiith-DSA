#include<iostream>
using namespace std;

void  baba(void){


 cout<<"My Name is Baba"<<endl; 

 return;

 cout<<"This Will Not Going to print"<<endl;  //this will also not execcute


}

int add(int a,int b){

    cout<<"PGM COE College of Engiineering Pune....."<<endl;
    cout<<"Ading Values: "<<endl;
    
    return  a+b;

    cout<<"Returned"<<endl;   //this sttatement will not going to Execute.
}

int main()
{

 
baba();

 int p=add(3,4);
 cout<<p<<endl;

//add(3,4);
   return 0;
 }