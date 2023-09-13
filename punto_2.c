#include <stdlib.h>
#include <stdio.h>

int main(){
	int nc[5],i,a=0;
	float prom=0;
	for(i=0;i<5;i++){
		printf("ingrese un num: ");
		scanf("%d",&nc[i]);
		prom=prom+nc[i];
		if(nc[i]>a){a=nc[i];}
	}
	prom=prom/5;	
	printf("el promedio es: %.2f \n",prom);
	printf("el numero mayor es: %d \n",a);
	system("pause");
	return 0;
}

