#include <stdio.h>

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	for(int i = 0;i<=n;i++){
		int m =i;
		int tg = 0;
		while(m){
			tg = tg*10 + m% 10;
			m/= 10;
		}
		if(tg==i){
			printf("%d la so thuan nghich\n",i);
		}else{continue;
		}
	}
	return 0;

}
