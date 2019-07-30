#include <stdio.h>
#include <math.h>

int main(){
	
	int a,b,c;
	printf("nhap a \n");
	scanf("%d",&a);
	printf("nhap b \n");
	scanf("%d",&b);
	printf("nhap c \n");
	scanf("%d",&c);
	while(a+b<=c&&a+c<=b&&b+c<=a){
		printf("day khong phai 3 canh tam giac \n");
		printf("nhap lai a \n");
		scanf("%d", &a);
		printf("nhap lai b \n");
		scanf("%d",&b);
		printf("nhap lai c \n");
		scanf("%d",&c);
	}
	printf("day la 3 canh cua tam giac \n");
	return 0;
}
