#include <stdio.h>

int main(){
	int n;
	printf("nhap n \n");
	scanf("%d",&n);
	int s = 0;
	while(n){
		s = s*10 + n% 10;
		n/= 10;
	}
	if(s==n){
		printf("%d la so thuan nghich \n",n);
	}else{
		printf("%d khong phai la so thuan nghich \n",n);
	}
	return 0;
}
