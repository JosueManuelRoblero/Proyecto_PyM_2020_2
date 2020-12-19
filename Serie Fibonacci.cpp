# include < stdio.h >
# include < stdlib.h >

int  main () {
	{
	int a = - 1 , s = 1 , r = 0 , n, i;
	sistema ( " cls " );
	printf ( " Ingrese el número de repeticiones del ciclo \ n " );
	scanf ( " % d " , & n);
    para (i = 0 ; i <n; i ++)
    {
    	r = a + s;
    	printf ( " % d , " , r);
    	a = s;
    	s = r;
	}
	sistema ( " pausa " );

}
	return  0 ;
}
