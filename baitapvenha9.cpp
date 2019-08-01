#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("nhap n \n");
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		int mark=1;
		for(int x=2;x<= sqrt(i);x++){
			if(i%x == 0)
				mark=0;
		}
		if(mark == 1){
			printf("%d\n",i);
		}else{continue;
		}
	}
	return 0;
}
