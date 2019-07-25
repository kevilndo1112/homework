#include <stdio.h>

int main(){
	int a,b,c;
	printf("nhap a \n");
	scanf("%d",&a);
	printf("nhap b \n");
	scanf("%d",&b);
	printf("nhap c \n");
	scanf("%d",&c);
	
	if(a<b){
		if(b<c){
			printf("min %d, max %d \n",a,c);
		}else{
			if(a<c){
				printf("min %d, max %d \n",a,b);
			}else{
				printf("min %d, max %d \n",c,b);
			}
		}
	}else{
		if(b>c){
			printf("min %d, max %d \n",c,a);
		}else{
			if(a>c){
				printf("min %d, max %d \n",b,a);
			}else{
				printf("min %d, max %d \n",b,c);
			}
		}
	}
	
	return 0;
}
