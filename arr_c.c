#include <stdio.h>

#define N 100

int main()
{
    int sieve[N] = {0};


    for (int i = 2; i*i < N; ++i)
        if (sieve[i] == 0)
            for (int k = i*i; k < N; k += i)
                sieve[k] = 1; 

    printf("Prime numbers: ");

    for (int i = 2; i < N; ++i) 
    {   
        if (sieve[i] == 0)
            printf("%3d", i);
    }
    printf("\n");
    return 0;
}