#include <stdlib.h>
#include <stdio.h>

int main(){
	int nc[5],i,rt=0;
	for(i=0;i<5;i++){
		printf("ingrese la resistencia: ");
		scanf("%d",&nc[i]);
		rt=rt+nc[i];
	}
	for(i=0;i<5;i++){
	printf("la resistencia es: %d \n",nc[i]);
	} 
	printf("la resistencia total es: %d \n",rt);
	system("pause");
	return 0;
}
