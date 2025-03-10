/*
Do-while
Author : Prigte kerubo
Reg : D33-2467-2023
*/
#include <stdio.h>

int main(){
 int i=1; //start
 
 do{
    printf("Number is: %d and cube of %d is: %d\n", i, i, i * i * i);
        i++; //step
    
    
    
    }while(i<=100); //stop
    return 0;
}