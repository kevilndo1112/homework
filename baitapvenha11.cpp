#include <stdio.h>

int main(){
	int ar[4][4];
	int tong = 0;
		for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("Nhap ar[%d][%d]=\n",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
	for (int i = 0; i < 4; ++i)
	{	
		for (int j = 0; j < 3; ++j)
		{
			if(i==j){
			tong += ar[i][j];
			}
		}
	
	}

	printf("tung binh cong ua duong cheo la %d",tong/4);

	return 0;
}
