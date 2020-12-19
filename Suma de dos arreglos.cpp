# include <stdio.h>
int   main ()
{
int i, j, a, k, l;
int arregloc [ 10 ];
int arregloa [ 10 ];
int arreglob [ 10 ];
    for (i = 0 ; i < 10 ; i ++)
  { 
     printf ( " Ingrese los datos del primer arreglo espacio% d   " , i + 1 );
     scanf ( " % d " , & arregloa [i]);
  }
     for (j = 0 ; j < 10 ; j ++)
  { 
     printf ( " Ingrese los datos del segundo arreglo espacio% d   " , j + 1 );
     scanf ( " % d " , & arreglob [j]);
  }
  for (k = 0 ; k < 10 ; k ++)
     {
  	    arregloc [k] = arregloa [k] + arreglob [k];
  	   
     }
      for (l = 0 ; l < 10 ; l ++)
  { 
        printf ( " La suma del espacio 1-% d es% d " , l + 1 , arregloc [l]);
        printf ( " \ n " );
  }
  return   0 ;
}
