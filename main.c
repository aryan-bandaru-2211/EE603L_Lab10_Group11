#include "tm4c123gh6pm.h"
#include "stdint.h"


int series_sum(int);

int main()
{
    int sum,k, i = 1;
    //Testing for various values of k
    for(;i<11;i++)
    {
        sum = series_sum(i);
    }
    return 1;
}

int series_sum(int k)
{
    //Declaring 10 variables
    volatile int a,b,c,d,e,f,g,h,i,j;
    if (k == 1)
    {
        return 1;
    }

    return k + series_sum(k-1);
}
