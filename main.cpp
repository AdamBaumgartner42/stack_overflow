#include <stdio.h>

void addStack(int count, int a){
    count++; // index function count
    int b = 1; // create new variable on stack
    printf("%d: stack bottom: %p, current: %p \n", count, &a, &b);
    addStack(count, a);
}

int main () 
{
    int a = 1;
    int count = 1;
    addStack(count, a);
    
   return 0; 
}
