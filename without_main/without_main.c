/*-------------------------------------------------*/
/*	Author	   : Thennarasu.D		   */
/*	Date	   : 19feb2019			   */
/*	Filename   : without_main.c		   */
/*	Description: Without mainfunction progrm   */
/*-------------------------------------------------*/


/* include header files  */

/* global variable declaration   */
#define ten main

/* Function defenitions and declarations  */
extern int printf(const char *__restrict __format, ...);

int ten(int argc,char *argv[])
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d ",j);
		printf("\n");
	}
}
