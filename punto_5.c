#include <stdlib.h>
#include <stdio.h>

int main(){
	int nc[30],i,acu=0,uni=0,com[2],j;
	com[1]=0;com[0]=0;
	for(i=1;i<31;i++){
		printf("vendedor nro %d ingrese el total de unidades vendidas de los 15 dias: ",i);
		scanf("%d",&uni);
		acu=acu+uni;
		if(uni>com[1]){com[1]=uni;com[0]=i;}	
	}	
	printf("vendedor con la mayor venta diaria es: %d\n",com[0]);
	printf("cantidad de unidades del vendedor: %d\n",com[1]);
	printf("cantidad total de unidades vendidas: %d\n",acu);
	system("pause");
	return 0;
}
