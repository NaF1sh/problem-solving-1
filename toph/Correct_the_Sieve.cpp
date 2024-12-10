#include <stdio.h>
int isPrime[1000100];

void sieve()
{
    for (int i = 2; i <= 1000000; i++)
    {
        isPrime[i] = 1;
    }
    for (int i = 2; i * i <= 1000000; i++) // Ensure we only go up to sqrt(1000000)
    {
        if (isPrime[i])
        {                                             // Only process if `i` is prime
            for (int j = i * i; j <= 1000000; j += i) // Start marking from `i * i`
            {
                isPrime[j] = 0;
            }
        }
    }
}

int main()
{
    sieve();
    int N;
    scanf("%d", &N);
    int num;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if (isPrime[num] == 1)
        {
            printf("%d is a prime number.\n", num);
        }
        else
        {
            printf("%d is not a prime number.\n", num);
        }
    }
    return 0;
}
