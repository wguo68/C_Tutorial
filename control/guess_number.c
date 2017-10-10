#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
void main(){
    int number,guess,count = 0;
    srand((int)(time(0)));
    number = 1+100.0*(rand()/RAND_MAX);
    while(count<7){
        printf("Enter a guess between 1 and 100 : \n");
        //Your code
        count++;
    }
    if(count==7)
    	 printf("You failed to guess!\n");
    else printf("You are right!\n");
}
