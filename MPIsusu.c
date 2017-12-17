#include <stdio.h>
#include<stdlib.h>
#include<mpi.h>

int main(int argc,char *argv[])
{
    MPI_Init(&argc,&argv);
    freopen("prime_number8.txt","w",stdout);
    int i;
    int j;
    int flag = 1;
    int count= 0;
    double start,end,time;
    for(i = 2;i <= 1000000;i++)
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
    printf ("the number of prime number is %d\n",count);
    MPI_Finalize();
    fclose(stdout);    
    printf ("the number of susu is %d\n",count);    
    return 0;
}
