// 804405 - aed1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> //-lm para compilar

int main(void)
{
    int premiados = 0;
    int ti   = 0;
    int n    = 0;
    int p    = 0;
    int m    = 0;
    int tamP = 0;
    int tamM = 0;
    
    scanf("%d", &premiados);
    getchar();

    for (n = 1; n <= premiados; n++)
    {
        scanf("%d", &ti);
        //     printf("%d\n", ti);
        if (ti == 1)
        {
            p = p + 1;
        }
        else if (ti == 2)
        {
            m = m + 1;
        }
    }   
    scanf("%d", &tamP);
    getchar();
    scanf("%d", &tamM);

    if (tamP == p && tamM == m)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    
    
    return (0);
}
