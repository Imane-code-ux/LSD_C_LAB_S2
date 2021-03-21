#include "header.h"

int iterative_fibo(int n)
{
    int c=0,f0=0,f1=1;
    for(int i=2;i<=n;i++){
        c=f0+f1;
        f0=f1;
        f1=c;
    }
    return c;
}
