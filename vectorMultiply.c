#include <stdio.h>
#include <omp.h>
int main(){
    int i;
	const N = 100000;
    double start,end,time;
    float a[N], b[N], result;
	result = 0.0;
    for (i = 0; i < N; i++){
        a[i] = (i + 20) / 2;
        b[i] = (i + 30) / 3;        
    }    
    start=omp_get_wtime();
    #pragma omp parallel for private(i) reduction(+:result)
    for (i = 0; i < N; i++){
        result = result + (a[i] * b[i]);
    }
    end=omp_get_wtime();
    time=end-start;
    printf("a*b= %12.6lf\n", result);
    printf("time(s)=%12.6lf\n",time);
    return 0;
}