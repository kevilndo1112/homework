#include <stdio.h>

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    int sum = 0;//khai bao biem sum
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n){
	
        printf("%d la so hoan hao.",n);
    }else{
        printf("%d khong phai la so hoan hao.",n);
    }
	return 0;
}
