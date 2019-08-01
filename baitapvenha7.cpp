#include <stdio.h>

int main(){
	int n;
	printf("nhap n \n");
	scanf("%d",&n);
	int f0 = 0, f1 = 1;
	int fn = 1;
	for(int i =2;i<= 2;i++){
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
		}	
	printf("so fibo thu n = %d \n", fn);
	return 0;	
}
