#include "tm4c123gh6pm.h"
#include "stdint.h"


int series_sum(int);

int main()
{
    int sum,k;
    k = 10; //Calculating sum of first 10

    sum = series_sum(k);
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
