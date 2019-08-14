#include<stdio.h>

int main(){
	int x,y;
	printf("nhap x: \n");
	scanf("%d",&x);
	printf("nhap y: \n");
	scanf("%d",&y);
	printf(" %d+%d=%d \n",x,y,x+y);
	printf(" %d-%d=%d \n",x,y,x-y);
	printf(" %dx%d=%d \n",x,y,x*y);
	if(y!=0){
		printf(" %d/%d=%d \n",x,y,x/y);
	}else{
		printf("hai so khong the chia cho nhau \n");
	}
	return 0;
}
