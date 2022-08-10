#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{

 int rv;
 srand(time(NULL));

 rv=(rand()%2);

 cout<<"you got: "<<rv;


   return 0;
 }