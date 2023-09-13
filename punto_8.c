#include <stdlib.h>
#include <stdio.h>

int main(){
	int a[3]={0,1,0},i,num;
	
	printf("ingrese un num: ");
	scanf("%d",&num);
	int nc[num];
	for(i=0;i<num;i++){
		a[0]=a[1]+a[2];
		a[1]=a[2];
		a[2]=a[0];
		nc[i]=a[0];
	}
	for(i=0;i<num;i++){
	printf("%d \n",nc[i]);
	}
	system("pause");
	return 0;
}
 
