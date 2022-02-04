#include<stdio.h>

struct Rectangle{
    int length;
    int breadth;
    char x;// this will take 4 bytes but when it acctually needs only one byte to store a character. 
    //This is because it is easy for the computer to store values in 4 bytes. 
    //This adjustment in memory is called as padding, However later on it will discard the last three bytes

};

int main(){
   
   struct Rectangle r1 = {10, 5};

    //In latest compilers integers take 4 bytes

    r1.length = 15;
    r1.breadth = 7;

    printf("Length is %d \n",r1.length);
    printf("Breadth is %d \n", r1.breadth);
    printf("%lu \n", sizeof(r1));

   return 0;
   
   
}