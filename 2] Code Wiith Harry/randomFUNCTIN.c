#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

int randomvalue;

srand(time(NULL));

  randomvalue=(rand()%6);

  printf("you got: %d",randomvalue);



    return 0;
}