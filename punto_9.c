#include <stdlib.h>
#include <stdio.h>
int main(){
	int a=1,b,j=0,c=0,nc[3]={0,0,0},pu;
	while(a!=0){
		printf("ingrese un numero: ");
		scanf("%d",&a);
		if(a!=0){
			if(j==0){b=a;}
			nc[2]=a+b;
			if(a>c){nc[0]=nc[0]+1;}else{
				if(a<c){nc[1]=nc[1]+1;}
				
			}
			c=a;
			j++;		
		}
	}
	nc[1]=nc[1]+1;
	if(nc[0]==j){printf("estan de forma ascendente\n");}else{
		if(nc[1]==j){printf("estan de forma descendente\n");} else{
			if((nc[0]!=j)&&(nc[1]!=j)){printf("estan desordenados\n") ;}
		}
	}
	printf("la suma del primero y el ultimo es: %d \n",nc[2]);
	system("pause");
	return 0;
}
