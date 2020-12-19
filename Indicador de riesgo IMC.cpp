#include  <stdio.h>
int  main ()
{
	peso flotante , est, IMC;
	printf ( " Ingrese su peso en kg: " );
	scanf ( " % f " , & peso);
	printf ( " Ingrese su estatura en m: " );
	scanf ( " % f " , & est);
	IMC = (peso / (est * est));
	if (IMC < 18,5 )
	{
		printf ( " Tu estado es: Peso bajo. " );
	}
	if (IMC> = 18,5 && IMC <= 24,9 )
	{
		printf ( " Tu estado es: Peso normal. " );
	}
	if (IMC> = 25.0 && IMC <= 29.9 )
	{
		printf ( " Tu estado es: Sobrepeso. " );
	}
	if (IMC> = 30.0 && IMC <= 34.9 )
	{
		printf ( " Tu estado es: Obesidad tipo 1. " );
	}
	if (IMC> = 35.0 && IMC <= 39.9 )
	{
		printf ( " Tu estado es: Obesidad tipo 2. " );
	}
	if (IMC> 40.0 )
	{
		printf ( " Tu estado es: Hiper obesidad " );
	}
	return  0 ;
}
