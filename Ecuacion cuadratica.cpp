#include  <stdio.h>
#include  <math.h>
int  main ()
{
	float a, b, c, raiz, x1, x2;
	printf ( " ingrese el valor de la variable a: " );
	scanf ( " % f " , & a);
	printf ( " Ingrese el valor de la variable b: " );
	scanf ( " % f " , & b);
	printf ( " Ingrese el valor de la variable c: " );
	scanf ( " % f " , & c);
	raiz = pow (b, 2 ) - 4 * (a * c);
	if (raiz <= 0 )
	{
		printf ( " Error las soluciones no son reales. " );
	}
	else
	{
		x1 = (- b + sqrt (raiz)) / ( 2 * a);
		x2 = (- b- sqrt (raiz)) / ( 2 * a);
		if (x1 == x2)
		{
			printf ( " La única solución es:% f " , x1);
		}
		else
		{
			printf ( " La primera solución es:% f " , x1);
			printf ( " La segunda solución es:% f " , x2);
		}
	}
	return  0 ;
}
