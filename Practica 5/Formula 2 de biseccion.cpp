#include <stdio.h>
#include <math.h>
 
#define RAIZ(x) (log(abs(x)) + pow((x),2)-4)
 
int main() {
float xi, xu, xr, xa, ea;
int iteraciones;
printf("Limite superior de la raiz: ");
scanf("%f", &xi);
printf("Limite inferior de la raiz: ");
scanf("%f", &xu);
 
iteraciones = 0;
xa = 0.0;
ea = 0;
printf("%12s %10s %10s %10s %10s\n", "Iteraciones", "Xi", "Xu", "Xr", "Ea");
 
do{
iteraciones++;
xr = (xi + xu) / 2;
if(iteraciones >= 2) {
ea = ((xr - xa) / xr) * 100; 
}
ea = fabs(ea); 
printf("%12d %10f %10f %10f %10f\n", iteraciones, xi, xu, xr, fabs(ea));
xa = xr;
if(RAIZ(xr) > 0) {
xi = xr;
} else{
xu = xr;
}
 
} while(ea > 0.5 || (ea == 0.0 && iteraciones == 1));
 
printf("\nLa funcion es = 2xcos(2x)-(x+1)2); es: %f\n", xr);
 
return 0;
}
