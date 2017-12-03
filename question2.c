#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int main(){
    int i;
    int j;
    int flag = 1;
    int count= 0;
    double start, end, time0, time1, time2, time3, time4, time5, time6, time7, time8;
	double bi1,bi2,bi3,bi4,bi5,bi6,bi7,bi8;

	//串行
	start=omp_get_wtime();
    for(i = 2;i <= 10000;i++){
        for(j = 2;j <= i / 2;j++){
			if(i % j ==0){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			printf("%d\n",i);
		}
    flag = 1;
    }
	end = omp_get_wtime();
    time0 = end - start;
	printf("time(s)=%12.6lf\n",time0);
	
	//1
	start=omp_get_wtime();
    #pragma omp parallel for private(i,j) num_threads(1)
    for(i = 2;i <= 10000;i++){
        for(j = 2;j <= i / 2;j++){
			if(i % j ==0){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			printf("%d\n",i);
		}
    flag = 1;
    }
	end = omp_get_wtime();
    time1 = end - start;
	printf("time(s)=%12.6lf\n",time1);

	//2
	start=omp_get_wtime();
    #pragma omp parallel for private(i,j) num_threads(2)
    for(i = 2;i <= 10000;i++){
        for(j = 2;j <= i / 2;j++){
			if(i % j ==0){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			printf("%d\n",i);
		}
    flag = 1;
    }
	end = omp_get_wtime();
    time2 = end - start;
	printf("time(s)=%12.6lf\n",time2);

	//3
	start=omp_get_wtime();
    #pragma omp parallel for private(i,j) num_threads(3)
    for(i = 2;i <= 10000;i++){
        for(j = 2;j <= i / 2;j++){
			if(i % j ==0){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			printf("%d\n",i);
		}
    flag = 1;
    }
	end = omp_get_wtime();
    time3 = end - start;
	printf("time(s)=%12.6lf\n",time3);

	start=omp_get_wtime();
    #pragma omp parallel for private(i,j) num_threads(4)
    for(i = 2;i <= 10000;i++){
        for(j = 2;j <= i / 2;j++){
			if(i % j ==0){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			printf("%d\n",i);
		}
    flag = 1;
    }
	end = omp_get_wtime();
    time4 = end - start;
	printf("time(s)=%12.6lf\n",time4);

	start=omp_get_wtime();
    #pragma omp parallel for private(i,j) num_threads(5)
    for(i = 2;i <= 10000;i++){
        for(j = 2;j <= i / 2;j++){
			if(i % j ==0){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			printf("%d\n",i);
		}
    flag = 1;
    }
	end = omp_get_wtime();
    time5 = end - start;
	printf("time(s)=%12.6lf\n",time5);

	start=omp_get_wtime();
    #pragma omp parallel for private(i,j) num_threads(6)
    for(i = 2;i <= 10000;i++){
        for(j = 2;j <= i / 2;j++){
			if(i % j ==0){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			printf("%d\n",i);
		}
    flag = 1;
    }
	end = omp_get_wtime();
    time6 = end - start;
	printf("time(s)=%12.6lf\n",time6);

	start=omp_get_wtime();
    #pragma omp parallel for private(i,j) num_threads(7)
    for(i = 2;i <= 10000;i++){
        for(j = 2;j <= i / 2;j++){
			if(i % j ==0){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			printf("%d\n",i);
		}
    flag = 1;
    }
	end = omp_get_wtime();
    time7 = end - start;
	printf("time(s)=%12.6lf\n",time7);	
	
	
	
	
	
	
	start=omp_get_wtime();
    #pragma omp parallel for private(i,j) num_threads(8)
    for(i = 2;i <= 10000;i++){
        for(j = 2;j <= i / 2;j++){
			if(i % j ==0){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			printf("%d\n",i);
		}
    flag = 1;
    }
	end = omp_get_wtime();
    time8 = end - start;
	printf("time(s)=%12.6lf\n",time8);
	bi1 = time1 / time0; bi2 = time2 / time0; bi3 = time3 / time0;
	bi4 = time4 / time0; bi5 = time5 / time0; bi6 = time6 / time0;
	bi7 = time7 / time0; bi8 = time8 / time0;
	printf("1:%12.6lf\n2:%12.6lf\n3:%12.6lf\n4:%12.6lf\n5:%12.6lf\n6:%12.6lf\n7:%12.6lf\n8:%12.6lf\n",
		bi1, bi2, bi3, bi4, bi5, bi6, bi7, bi8);
    return 0;
}










