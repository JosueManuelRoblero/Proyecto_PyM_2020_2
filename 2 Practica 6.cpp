#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float funcion1(float x);
float funcionderiv(float y);
float xo;
int i=1;
float X;
float error;
int n=15;


int main()

{
	printf("\nCalcularemos la raiz de la ecuacion:\n");
	printf("\n\n\tf(x)=x^3-2x-5\n");
	printf("\n\nDame el valor de xo\n");
	scanf("%f", &xo);
	while (i<=n)
	{
	
 X= (xo)-(funcion1(xo)/funcionderiv(xo));
  error =abs(((X-xo)/X)*100);
  printf("i = %d\n\n", i);
 printf("\n\nMi nuevo valor es %.6f\n", X);
 printf("\nel error porcentual es %.5f\n\n\n", error);
 
 xo=X;

 i++;
}
}

float funcion1(float x)

{
return	pow(x,3)-2*x-5;
	
}
float funcionderiv(float x)
{ 
return	pow(3*x,2)-2;
	
}

