#include <stdlib.h>
#include <stdio.h>
int main(){
	int nc[10],suma=0,producto=1,de=0,i=0;
	float prom=0;
	for(i=0;i<10;i++){
		printf("ingrese un num: ");
		scanf("%d",&nc[i]);
		suma=suma+nc[i];
		producto=producto*nc[i];
		prom=prom+nc[i];
	}
	prom=prom/10;
	i=0;
	while(i<=10){
		if(nc[i]<prom){de=de+1;}
		i++;
	}
	printf("la suma de la lista es: %d \n",suma);
	printf("el producto es: %d \n",producto);
	printf("el promedio es: %.2f \n",prom);
	printf("la cantidad debajo del promedio es: %d \n",de);
	system("pause");
	return 0;
}
