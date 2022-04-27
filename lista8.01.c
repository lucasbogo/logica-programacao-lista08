#include <stdlib.h>
#include <stdio.h>


int main(void)
{
    int a = 0;

    
    printf("\t\tIMPRIMINDO TABELA ASCII\n\n");


    for ( a = 1; a < 255; a++ )
    {
      
        printf("Decimal: %i\tOctal: %o\tHexadecimal: %x\t\t", a, a, a);

        if (a > 32)
            printf("Caractere: %c",a);
            printf("\n");
    }

    system("pause");
    
    return 0;
}