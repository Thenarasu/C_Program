/*-------------------------------------------------*/
/*	Name	   : Thennarasu.D		   */
/*	Date	   : 17feb2019			   */
/*	Filename   : without_header.c		   */
/*	Description: Without headerfile progrm	   */
/*-------------------------------------------------*/


/* include header files  */

/* Global variable declarations  */

/* Function defenitions and declaration */
extern int printf(const char *__restrict __format, ...);

int main(int argc,char *argv[])
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d ",j);
		printf("\n");
	}
}
