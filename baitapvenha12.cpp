#include <stdio.h>

int main(){
	int m,n,x,y,a,b;
	int i,j;
	printf("nhap m: \n");
	scanf("%d",&m);
	printf("nhap n: \n");
	scanf("%d",&n);
	printf("nhap x: \n");
	scanf("%d",&x);
	printf("nhap y: \n");
	scanf("%d",&y);
	int ar1[m][n],ar2[x][y],tong[a][b];
	if(x!=m||y!=n){
		printf("hai ma tran khong cung kich co \n");
	}else{
		printf("\nNhap ma tran 1\n");
   		for (i = 0; i < m ; i++)
   		{
        for (j = 0; j < n ; j++)
	    {
         printf("Nhap phan tu ar1[%d][%d] : ", i, j);
         scanf("%d", &ar1[i][j]);
        }
   		}
   		printf("\nNhap ma tran 2\n");
   		for (i = 0; i < x ; i++)
		{
        for (j = 0; j < y ; j++)
		{
         printf("Nhap phan tu ar2[%d][%d] : ", i, j);
         scanf("%d", &ar2[i][j]);
        }
    	}
    	for (i = 0; i < m ; i++)
    	{
        for (j = 0; j < n ; j++)
		{
         tong[i][j] = ar1[i][j] + ar2[i][j];
        }
		}
	}
   		printf("\nKet qua cua phep cong hai ma tran la: \n");
   		for (i = 0; i < a ; i++) {
        for (j = 0; j < b ; j++) {
        printf("%d\n", tong[i][j]);
      	}
        printf("\n");
   		}
	return 0;
}
