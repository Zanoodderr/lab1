#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int variant;
    double x1, x2, delta, x, y;
    unsigned int N;

    printf("\n\t=_-------------------------------_=");
    printf("\n\t=__*-----------lab1------------*__=");
    printf("\n\t=_*--function table(y=cbrt(x))--*_=");
    printf("\n\t=_________________________________=");


    do
    {
        printf("\n\n\t Enter variant (1 or 2)\n  Variant=");
        scanf("%u", &variant);
    }
    while (variant!=1&&variant!= 2);


    printf("\n\tEnter the first argument value\n  X(first)=");
    scanf("%lf", &x1);

    printf("\n\tEnter the last argument value\n  X(last)=");
    scanf("%lf", &x2);


    if (variant == 1)
    {
        printf("\n\tEnter number of points in the table\n N=");
        scanf("%u", &N);

        if (N>1){
            delta = (x2-x1)/(N-1);}
        else{
            N=1;
            delta=0;}
    }
    else {
        printf ("\n\tEnter function step\n  delta=");
        scanf ("%lf", &delta);
        N = ((x2-x1)/delta)+1;
    }


    printf ("\n\tx(first)="); printf("%.2f", x1);
    printf("  x(last)="); printf("%.2f", x2);
    printf("  delta="); printf("%.2f", delta);
    printf ("\n\t****************************************\n");
    printf ("\t*     N     *     X     *     F(X)     *");
    printf ("\n\t****************************************\n");


    for(int i = 0; i < N; i++)
    {
        x += delta*i;
        y = cbrt(x);

        printf("\t|%11d|%11f|%14f|\n", i+1, x, y);
        printf("\t+-----------+-----------+--------------+\n");
        {
        if(N > 10)
            if((i+1)% 10 == 0)
            if (i+1 == 10) {printf("\tpress any key to continue..."); getch();printf("\r");}
              else getch();
        }
    }
}
