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
	
	if(a=0){
		printf(" phuong trinh co nghiem x = %lf \n",-c/b);
	}else{
		if(b*b<4*a*c){
			printf("phuong trinh vo nghiem \n");
		}else{
			int p = (b*b)-(4*a*c);
			printf("phuong trinh co nghiem x1 = %lf, x2 = %lf\n",(-b+sqrt(p))/(2*a),(-b-sqrt(p))/(2*a));
		}
	}
	
	return 0;
}
