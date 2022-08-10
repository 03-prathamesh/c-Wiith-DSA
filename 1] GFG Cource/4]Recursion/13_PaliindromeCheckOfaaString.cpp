#include<bits/stdc++.h>
using namespace std;


 bool ispalindrome(string &str,int start ,int end){


  if(start>=end){

        return true;

  }

if(str[start]!=str[end]){


   return 0;

}
   return  ispalindrome(str,start+1,end-1);



// return (str[start]==str[end] && isPalindrome(str,start+1,end-1))

 }



int main()
{
    
    string s ;
    cout<<"Enter a string: "<<endl;
    cin>>s;
int length=s.length();
// cout<<length<<endl;
 int start=0; 
 int end=length-1;

    int fun=ispalindrome(s,start,end);
    cout<<fun<<endl;


   return 0;
}