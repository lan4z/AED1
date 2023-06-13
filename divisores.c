//804405 - aed1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> //-lm para compilar

int main(void)
{
    int i         = 0;
    int n         = 0;
    int divisor = 0;
    
        scanf("%d", &n);
    
    if( 1 <= n && n <= 10000)
    {
        for(i = 1; i <= n; i = i + 1)
        {
            if(n % i == 0)
            {
                divisor = divisor + 1;
            }
    
        }
            printf("%d", divisor);
    }

        
    return (0);
}
