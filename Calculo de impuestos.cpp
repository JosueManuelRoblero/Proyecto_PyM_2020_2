# include  <stdio.h>
# include  <math.h>
int  main ()
{
	char ec, soltero;
	float  ing, tf, porc;
	printf ( " Cual es su estado civil: " );
	scanf ( " % s " , & ec);
	if (ec = soltero)
	{
		printf ( " Cual es su ganancia mensual: " );
		scanf ( " % f " , & ing);
		if (ing < 32000 )
		{
			porc = (ing * 0.10 );
			tf = (ing-porc);
			printf ( " Su tarifa final es de:% f " , tf);
		}
		else
		{
			porc = (ing * 0,25 );
			tf = (ing-porc);
			printf ( " Su tarifa final es de:% f " , tf);
		}
	}
	else 
	{
		printf ( " Cual es su ganancia mensual: " );
		scanf ( " % f " , & ing);
		if (ing> 64000 )
		{
			porc = (ing * 0,25 );
			tf = (ing-porc);
			printf ( " Su tarifa final es de:% f " , tf);
		}
		else
		{
			porc = (ing * 0.10 );
			tf = (ing-porc);
			printf ( " Su tarifa final es de:% f " , tf);
		}
	}
	return  0 ;
}
