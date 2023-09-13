#include <stdlib.h>
#include <stdio.h>

int main(){
	int i,num1,num2,j=0;
	printf("ingrese un num: ");
	scanf("%d",&num1);
	printf("ingrese un num: ");
	scanf("%d",&num2);
	
	if(num1>num2){
		int nc[num1-num2-1];
		for(i=num2+1;i<=num1-1;i++){
			nc[j]=i;
		printf("%d \n",nc[j]);
		j++;
		}
	} 
	if(num2>num1){
		int nc[num2-num1-1];
		for(i=num1+1;i<=num2-1;i++){
			nc[j]=i;
			printf("%d \n",nc[j]);
			j++;
		}
	} 28
	system("pause");
	return 0;
}
