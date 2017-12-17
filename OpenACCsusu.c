#include <stdio.h>
#include <stdlib.h>
#define N 100000
int main()
{
    int i;
    int j;
    int flag = 1;
    int count= 0;
    for(i = 2;i <= N;i++){
    #pragma acc parallel
        for(j = 2;j <= i / 2;j++){
     if(i % j ==0){
         flag = 0;
     break;}}
     if(flag == 1){
	 count +=1;}
     flag = 1;}    

     printf ("the number of susu(ACC) is %d\n",count);
     return 0;
}
