#include<iostream>
using namespace std;

void fun(int n){   // here vallue of n becomes 2  at initial Point.


/* in Recursion there att some point this calliing should Stop .

 So  For stop this calliing "Base Cases" Plays Imporrtant role in  Recursion.


 so Recursion Terminating conditions are called as "Base Cases".

*/
    if(n==0){   // base case(Function(Functiion call) termination Condition)

        return;   // it will return controll back to function(1);  then  function 1 return to fun(2)
    }


   cout<<"GeeksForGeeks"<<endl;


    fun(n-1);     //Function calling itself.


    cout<<"GFG"<<endl;


}
int main()
{

int n;
cout<<"Enter Number to how Much Time You Are Going To Print Something"<<endl;
cin>>n;


fun(n);


   return 0;
 }