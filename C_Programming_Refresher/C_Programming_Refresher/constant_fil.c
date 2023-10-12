#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int old_main()

{
	const int CONST_NUM = 5;
	printf("%d\n", CONST_NUM);
	// this will show an error  	num = 8; due to having const
	printf("%d\n", CONST_NUM);


	return 0;
}

