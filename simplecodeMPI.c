#include<stdio.h>
#include<mpi.h>
int main(int argc, char *argv[]){
	int id, numberOfProc, i, i2, ii;	
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &id);
	MPI_Comm_size(MPI_COMM_WORLD, &numberOfProc);
	for(i = 1; i <= 1000; i++)
	{
		printf("hello, world");
		i2 = i * 2;
		for(ii = 1; ii <= i; ii++)
		{
			continue;
		}
	}
	MPI_Finalize();
	return 0;
}
