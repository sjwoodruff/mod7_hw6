/*
 * =====================================================================================
 *
 *       Filename:  mod7_hw6.c
 *       	Usage:  ./mod7_hw6.c
 *    Description:  Module 7 Hw 6
 *
 *        Version:  1.0
 *        Created:  02/28/2017 05:22:52 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Kurt Weloth (), kurtweloth@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <math.h>

/* Function Prototypes */
void Usage(void);
void GetRec(double* x, double* y);
void Polar(double x, double y, double* r, double* theta);
void Showit(double radius, double angle);
int AskQuestion(void);


/* Main Program */
int main(int argc, char *argv[ ])
{
	if(argc != 3)
	{
		Usage();
	}

	return 0;
}


/* Function Defenitions */

void Usage(void)
{
	printf("both params are required.\n");
	printf("must be a floating point.\n");
	return;
}





