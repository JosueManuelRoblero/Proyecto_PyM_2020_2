#include<stdio.h>
int  main ()
{
	int edad;
	printf ( " ingresa tu edad: " );
	scanf ( " % d " , & edad);
	if (edad >= 18 )
	{
		printf( " \n\nUsted es mayor de edad " );
	}
	else
	{
		printf ( " Usted es menor de edad " );
	}
	return  0 ;
}
