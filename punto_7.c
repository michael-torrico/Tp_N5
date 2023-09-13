#include <stdlib.h>
#include <stdio.h>

int main(){
	int nc[15],i,a=0,nota=0;
	for(i=0;i<15;i++){
		printf("ingrese su nota alumno nro %d: ",i);
		scanf("%d",&nota);
		if(nota>8){nc[a]=i;a++; 	}	
	}	
	if(a>0){
	printf("los alumnosque tienen nota mayor a 8 son:");
	
	for(i=0;i<a;i++){
	printf("alumno nro %d \n",nc[i]);}
	}
	else {printf("no hay mayor a 8 :(\n");}
	system("pause");
	return 0;
}
