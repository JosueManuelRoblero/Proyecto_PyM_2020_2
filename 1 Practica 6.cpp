#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float funcion1(float x);
float funcionderiv(float y);
float xo;
int i=1;
float X;
float xc, xx;
float error;
int n=5;


int main()

{
	printf("\nCalcularemos la raiz de la ecuacion:\n");
	printf("\n\n\tf(x)=e^-x - x\n");
	printf("\n\nDame el valor de xo\n");
	scanf("%f", &xo);
	while (i<=n)
	{
	
 X= (xo)-(funcion1(xo)/funcionderiv(xo));
  error =abs(((X-xo)/X)*100);
 printf("Mi nuevo valor es %.6f\n", X);
 printf("\nel error porcentual es %.5f\n", error);
 
 xo=X;
 printf("\n%f\n", xo);

 i++;
}
}

float funcion1(float x)

{
return	(exp(-x))-x;
	
}
float funcionderiv(float x)
{ 
return	(-exp(-x))-1;
	
}

