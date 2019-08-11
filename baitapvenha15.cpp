#include<stdio.h>
#include<string.h>

int main(){
	int n,m;
	printf("nhap n: \n");
	scanf("%d",&n);
	printf("nhap m: \n");
	scanf("%d",&m);
	char s1[n],s2[m];
	printf("Nhap chuoi 1:\n");
	scanf("%s",s1);
	printf("Nhap chuoi 2:\n");
	scanf("%s",s2);
	for(int i = 0; i<n ; ++i){
		for(int j = 0; j<m ; ++j){
			if(s1[i]==s2[j]){
				printf("s1[%d] giong s2[%d]\n",n,m);
			}else{
			continue;
			}
		}
	}
	return 0;
}
