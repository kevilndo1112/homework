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
	
	if(a<b+c&&b<a+c&&c<a+b){
		printf(" chu vi tam giac = %d\n",a+b+c);
		printf(" dien tich tam giac = %lf\n",sqrt(((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4));
	}else{
		printf("day khong phai la tam giac \n");
	}
	
	return 0;
}
