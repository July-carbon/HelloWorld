/*
 ============================================================================
 Name        : Helloworld.c
 Author      : Walter
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

#define PROCESS_SUCCESS 0

int main(void) {
	double theta = 0.5;

	double d_cos = cos(theta);
	double d_sin = sin(M_PI);
	double d_sqrt = sqrt(7);
	double d_log = log(10);
	double d_exp = exp(2);
	double d_log2 = log(2);

	printf("cal:cos(theta) = %lf\n",d_cos);
	printf("cal:sin(pi) = %lf\n",d_sin);
	printf("cal:sqrt(7) = %lf\n",d_sqrt);
	printf("cal:log(10) = %lf\n",d_log);
	printf("cal:exp(2) = %lf\n",d_exp);
	printf("cal:log(2) = %lf\n",d_log2);

	puts("Hello HiLinux!!!"); /* prints Hello World!!! */
	return PROCESS_SUCCESS;
}
