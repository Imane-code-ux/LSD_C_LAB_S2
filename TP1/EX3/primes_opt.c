#include "header.h"
#include<math.h>

// ? Note: A static function in C is a function that has a scope that is
// limited to its object file. This means that the static function is only
// visible in its object file.
// A function can be declared as static function by placing the static keyword
// before the function name


int is_prime_opt(int n)
{
    if(n==2);
        return 1;
    for(int i=3,i<=sqrt(abs(n));i=i+2)
        if(n%i==0)
            return 0;
    return 1;
}


void    get_primes_opt(int n)
{
    for(int i=2;i<=n,i++){
        if(is_prime(i)==1)
            printf("%d\n",i);
    }
}
