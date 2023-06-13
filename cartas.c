//804405 - aed1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> //-lm para compilar

int main(void)
{
        int cartas[5];
        int i     = 0;
        int carta = 0;
        int ok    = 1;

        for (i = 0; i < 5; i++)
        {
                scanf("%d", &carta);
                getchar();

                        if (carta >= 1 && carta <= 13)
                        {
                                cartas[i] = carta;
                        }
                        else
                        {
                                ok = 0;
                                i  = 5;
                        }
        }
        if( ok != 0)
        {      
                if(cartas[0] < cartas[1] && cartas[1] < cartas[2] && cartas[2] < cartas[3] && cartas[3] < cartas[4])
                {
                        printf("%c\n", 'C');
                }
                else if(cartas[0] > cartas[1] && cartas[1] > cartas[2] && cartas[2] > cartas[3] && cartas[3] > cartas[4])
                {
                        printf("%c\n", 'D');
                }
                else
                {
                        printf("%c\n", 'N');
                }
                
                
        }

    return (0);
}
