#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float funcion2(float x);
float xmenosuno, xcero, resultado, error;
int i=1;
int n=100;

int main()

{
printf("\n\t\tCalcularemos la raiz de la funcion\n\n");
printf("\n\nf(x)= x^3-2x-5\n");
printf("\nPor favor ingrese el valor x-1\n");
scanf("%f", &xmenosuno);
printf("\nPor favor ingrese el valor x0\n");
scanf("%f", &xcero);
while(i<=n)
{
resultado= xcero-((funcion2(xcero)*(xmenosuno-xcero))/(funcion2(xmenosuno)-funcion2(xcero)));
error=abs(((resultado-xcero)/resultado)*100);
printf("\n\nLa x%d es = %.8f\n\n", i, resultado);
printf("\n\nel error porcentual es %.10f\n\n", error);

xcero=resultado;
i++;

}

}
float funcion2(float x)
{
	return pow(x,3)-(2*x)-(5);
}

