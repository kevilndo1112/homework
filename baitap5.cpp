#include <stdio.h>
#include <math.h>
 
int main(){
    int n;
    printf("nNhap n = \n");
    scanf("%d", &n);
    if(n < 2){
        printf("%d khong phai so nguyen to \n", n);
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("%d la so nguyen to \n", n);
    }else{
        printf("%d khong phai so nguyen to \n", n);
    }
    return 0;
    }
