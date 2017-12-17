#include <stdio.h>
#include <omp.h>
#define N 100000

int main()
{
    int i;
    float a[N], b[N], result;
    result = 0.0;
    for (i = 0; i < N; i++)
    {
        a[i] = i * 1.0;
        b[i] = (i + 2) / 2.0;
        
    }
#pragma acc parallel
    for (i = 0; i < N; i++)
    
    {        
        result = result + (a[i] * b[i]);
    }
    printf("a * b = %12.6lf\n", result);
    return 0;
}
