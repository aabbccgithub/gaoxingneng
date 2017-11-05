// 使用Eratosthenes方法找出指定范围内的 所有质数
#include <stdlib.h>
#define SIZE 50000                    //该方法能够求出  2*SIZE  之内的质数
#define TRUE 1
#define FALSE 0
int
	main()
{
	char tmp[ SIZE ]; /* the tmp */
	char *sp; /* pointer to access the tmp */
	int number; /* number we’re computing */
	/*
	** Set the entire tmp to TRUE.
	*/
	for( sp = tmp; sp < &tmp[ SIZE ]; )
		*sp++ = TRUE;
	/*** Process each number from 3 to as many as the tmp holds. (Note: the
	** loop is terminated from inside.)
	*/
	for( number = 3; ; number += 2 ){
		/*
		** Set the pointer to the proper element in the tmp, and stop
		** the loop if we’ve gone too far.
		*/
		sp = &tmp[ 0 ] + ( number-3 ) / 2;
		if( sp >= &tmp[ SIZE ] )
			break;
		/*
		** Now advance the pointer by multiples of the number and set
		** each subsequent entry FALSE.
		*/
		while( sp += number, sp < &tmp[ SIZE ] )
			*sp = FALSE;
	}
	/*
	** Go through the entire tmp now and print the numbers corresponding
	** to the locations that remain TRUE.
	*/
	printf( "2\t" );
	for( number = 3, sp = &tmp[ 0 ];
		sp < &tmp[ SIZE ];
		number += 2, sp++ ){
			if( *sp )
				printf( "%d\t", number );
	}
	return 0;
}
