#include <stdlib.h>
#include <stdio.h>

int main(){
	int nc[30],i,a=0;
	float prom=0;
	for(i=0;i<30;i++){
		printf("ingrese su nota: ");
		scanf("%d",&nc[i]);
		prom=prom+nc[i];
		
	}
	prom=prom/30;	
	printf("el promedio es: %.2f \n",prom);

	system("pause");
	return 0;
}

