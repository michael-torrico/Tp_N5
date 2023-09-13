#include <stdlib.h>
#include <stdio.h>
int main(){
	int nc[30],i,a=0,sueldo=0,v=0,j;
	for(i=1;i<=20;i++){
		printf("ingrese su sueldo: ",i);
		scanf("%d",&sueldo);
		if(sueldo>2000){ v++;}else{a++;}	
	}
	printf("cantidad de mas de 2000: %d\n",v);
	printf("cantidad de menos de 2000: %d\n",a);
	system("pause");
	return 0;
}
