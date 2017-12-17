#include <stdio.h>
#include <stdlib.h>
#define N 100000
int main()
{
    freopen("the number of susu(MP).txt","w",stdout);
    int i;
    int j;
    int flag = 1;
    int count= 0;
    double start,end,time;

    #pragma omp parallel for private(i,j) num_threads(8)
    for(i = 2;i <= N;i++)
    {
        for(j = 2;j <= i / 2;j++)
 {
     if(i % j ==0)
     {
         flag = 0;
  break;
     }
 }
     if(flag == 1)
     {
         printf("%d\n",i);
	 count +=1;
     }
     flag = 1;

    }
    
    fclose(stdout);

    freopen("/dev/tty","w",stdout);
    printf ("the number of susu(MP) is %d\n",count);

    return 0;
}
