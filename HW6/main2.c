/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int i = 10;
    
    if (i == 0) {
        printf("\t zero \n" );
    } else if (i % 2 == 0) {
        printf("\t even \n" );
    } else {
        printf("\t odd \n" );
    }
    return 0;
}