# include <stdio.h>
# include <math.h>
# include<conio.h>
# include<string.h>
# include<process.h>
#define TOL 0.000005
#define f(x) (log(abs(x)) + pow((x),2)-4)

void falsaposicion();

void main() {
	printf("\n Solucion por el metodo de Falsa posicion \n");
	printf("\n La Ecuacion a resolver es: ");
	printf("\n\t\t\t (log(abs(x)) + pow((x),2)-4)= 0 \n\n");
falsaposicion();	
}

void falsaposicion(){
	float f0,f1,f2;
	float x0,x1,x2;
	int itr;
	int i;
	printf("Numero Maximo de Iteracciones: ");
	scanf("%d",&itr);
	for(x1=0.0;;){
		f1=f(x1);
		if (f1>0){
			break;
		}
		 else {
		 	x1 = x1+0.1;
		 }
	}
			
	x0= x1-0.1;
	f0 = f(x0);
	printf("\n\t\t----------------------------------------");
	printf("\n\t\t Iteraccion\t x\t\t F(X) \n");
	printf("\n\t\t----------------------------------------");
	  for(i=0;i<itr;i++){
	  	x2 = x0-((x1-x0)/(f1-f0))*f0;
	  	f2=f(x2);
	  	 if(f0*f2>0){
	  	 	x1=x2;
	  	 	f1=f2;
	  	 }
	  	   else {
	  	    	x0=x2;
	  	    	f0=f2;
	  	   }
	  	     if (fabs(f(2))>TOL){
	  	     	printf("\n\t\t%d\t%f\t%f\n",i+1,x2,f2);
	  	     }
	  }
	  printf("\t\t--------------------------------");
	  printf("\n\t\t\t Raiz= %f\n",x2);
	  printf("\t\t------------------------------");
	  getch();
			}
