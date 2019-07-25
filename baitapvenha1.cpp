#include <stdio.h>

int main(){
	int a,b;
	printf("nhap a=\n");
	scanf("%d",&a);
	printf("nhap b=\n");
	scanf("%d",&b);
	
	if(a>b){
		if(b=0){
		printf("a/b vo nghiem\n");
		}else{
			printf("a/b= %lf\n",a/b);
		}
		}else{
		printf("a*b= %d\n",a*b);
	} 
	
	return 0;
}
