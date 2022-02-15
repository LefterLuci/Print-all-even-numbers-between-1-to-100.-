#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int i=0;

    printf("print all even numbers between 1 to 100.\n");

    for(i=0;i<=100; i++)
    {
        if(i%2==0)
        printf("%d\n",i);

    }


       return 0;
}
