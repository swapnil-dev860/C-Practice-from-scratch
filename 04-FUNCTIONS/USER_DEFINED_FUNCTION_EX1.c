#include<stdio.h>
add();  //Function declaration
int main(){
    add();   //Function call
    return 0;     
}


add()   //Function definition
{
    int a=10,b=20,c;
    c=a+b;
    printf("%d",c);
}