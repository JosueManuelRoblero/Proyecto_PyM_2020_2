#include<stdio.h>
int  main ()
{
	float i, a, b = 0 , c = 1 , d = 1 , e;
	printf ( " Ingrese el numero " );
	scanf ( " % f " , & a);
	for (i = 1 ; i <a; i ++)
	{
		d = b + c;
		b = c;
		c = d;
		e = c / b;
		printf ( " % f  " , e);
	}
	return  0 ;
}
