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
 *         Author:  Kurt Weloth, Sterling Woodruff
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <math.h>

/* Function Prototypes */
void Usage(void);
// This is your help function
void GetRec(double* x, double* y);
// This function accepts the input data
void Polar(double x, double y, double* r, double* theta);
// This function performs the required calculation of polar cordinates. The function receives two inputs the x- and y- coordinate, and "returns", using pointers, the raduis and angle coordinates
void Showit(double radius, double angle);
// This function displays the values of the two parameters, which in this case has been named radius and angle. 
int AskQuestion(void);
// This function asks the user if he/she wants to do another calculation. You will store the user input and return it as a int variable. 


/* Main Program */
int main(int argc, char *argv[ ])
{
	int ar1,ar2;
	double rad, ang;

	if(argc != 3)
	{
		Usage();
	}
	ar1 = atof(argv[1]);
	ar2 = atof(argv[2]);
	// If ar1 or ar2 == 0.0 call usage again
	if(ar1 == 0.0 || ar2 == 0.0)
	{
		Usage();
	}
	Polar(ar1, ar2, &rad, &ang);
	Showit(rad,ang);
	printf("\n");
	AskQuestion();
	return 0;
}


/* Function Defenitions */
void Usage(void)
{
	printf("both params are required.\n");
	printf("must be a floating point.\n");
	exit(1);
}

void GetRec(double* x, double* y)
{
	double first, second;
	printf("Rectangular to Polar Coordinate conversion program.\n");
	printf("Enter the x coordinate: ");
	scanf("%lf", &first);
	printf("Enter the y coordinate: ");
	scanf("%lf", &second);
	*x = first;
	*y = second;
}

void Polar(double x, double y, double* r, double* theta)
{
	*r = sqrt(pow(x, 2) + pow(y, 2));
	*theta = atan (y/x) ;
}
void Showit(double r, double theta)
{
	printf("The polar cordinates are: \n");
	printf("Distance from origin: %lf\n", r);
	printf("Angle (in degrees) from x-axis: %lf\n", theta);
}

int AskQuestion(void)
{ 
	int yesno;
	double x, y;
	double rad, ang;
	printf("Do you want to calculate again (Y/N)?\n");
	printf("Y = 1, N = 0: ");
	scanf("%d", &yesno);
	if (yesno != 1 && yesno != 0)
	{
		printf("Bad input, try again\n");
		printf("\n");
		AskQuestion();
		return 0;
	}
	else if (yesno == 0)
	{
		printf("Done!\n");
	}
	else if (yesno == 1)
	{
		GetRec(&x, &y);
		Polar(x, y, &rad, &ang);
		Showit(rad, ang);
		printf("\n");
		AskQuestion();
	}
	
	return 0;
}

