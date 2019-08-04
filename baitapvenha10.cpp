#include <stdio.h>

int main(){
	int a[10];
	int total=0;
	for(int i=0;i<10;i++){
		printf("Nhap phan tu:\n");
		scanf("%d",&a[i]);
		total += a[i];
	}
	printf("gia tri trung binh cong la: %d\n",total/10);
	return 0;
	
}
