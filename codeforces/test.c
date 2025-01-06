#include<stdio.h>

void printSeries(int n)
{
    if(n==0)
        return;

    printSeries(n-1);

    printf("%d\n", n);
}

int main()
{
    printSeries(100);

    printf("Main Function Done!");

    return 0;
}