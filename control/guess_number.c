#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
void main(){
    int number,guess,count = 0;
    srand( (unsigned)time( NULL ) ); rand();    
    number = 1+(int)(100.0*rand()/(RAND_MAX+0.1));
    //printf("%d\n",number);
    while(count<7){
        printf("Enter your guess:\n");
        // Your code here ...
    }
    if(count==7)
    	 printf("You failed to guess!\n");
    else printf("You are right!\n");
}
