#include <stdio.h>

int main(){
	int a,b;
	printf("nhap a=\n");
	scanf("%d",&a);
	printf("nhap b=\n");
	scanf("%d",&b);
	
	if(a>b){
		printf("tong la %d\n",a+b);
	}else{
		printf("hieu la %d\n",a-b);
	} 
	
	return 0;
}

