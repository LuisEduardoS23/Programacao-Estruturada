#include <stdio.h>


int main()
{
    double pi = 3.14;
    double* pointer = &pi;

    printf("%lf\n", pi);
    printf("%lf", pointer);
    
    return 0;
}
