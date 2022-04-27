#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int  i,f,x,par,impar;

    //this code needs work a new logic
     
    //valor inicial: i;
    //valor final: f;

    //for ( i<=f 'i++');   

        for (i <= x; i++;);

        if (i*2>0)
            i++;

        if (i%2 == 0)
            par++;

        if (i%2 != 0)
            impar++;

        if (i%2 != 0 && i%3 == 0 && i%4 == 0)
            x++;

        printf ("%d", i);
        printf ("%d", par);
        printf ("%d", impar);
        printf ("%d", x);

        system("pause");

    return 0;

}