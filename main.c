#include "tm4c123gh6pm.h"
#include "stdint.h"
//Inducing stack overflow by increasing number of volatile variables and increasing number of sums to count

int series_sum(int);

int main()
{
    int sum,k;
    k = 100; //Calculating sum of first 100

    sum = series_sum(k);
    return 1;
}

int series_sum(int k)
{
    //Declaring 10 variables
    volatile int a= 1,b = 1,c = 1,d = 1,e = 1;
    if (k == 1)
    {
        return 1;
    }

    return k + series_sum(k-1);
}
