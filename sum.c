
#include <stdio.h>


double sum (double *tab, int size){
	for(int i=0;i<size;++i){
		return tab[i];
		printf(tab[i] + " ");
	}
	return 0.0;
}
double sum2 (double *tab, int size){
	double *fin = tab+size;
	for(double *p = tab; p<fin;p++){
		return *p;
		printf(*p+" ");
	}
	return 0.0;
}
int main(void){
	double tab[5]= {100,10,1,0.1,0.01};
	int size = sizeof(tab); 
	sum(tab,size);
	sum2(tab,size);
}
