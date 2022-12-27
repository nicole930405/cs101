/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int i = 10;
    
    if (i % 15 == 0) {
       printf("\t Love IU\n");
    } else if (i % 5 == 0) {
       printf("\t IU\n");
    } else if (i % 3 == 0) {
       printf("\t Love\n");
    } else {
       printf("\t %d\n", i);
    } 
    
    return 0;
}