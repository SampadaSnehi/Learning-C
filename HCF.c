#include <stdio.h>

int main(){
    int a,b, larger, smaller,i;
    int num=1;

    printf("enter nums");
    scanf("%d %d",&a,&b);

    if (a>b){
        larger = a;
        smaller = b;
    }else{
        smaller = b;
        larger = a;
    }
    
    for(i=1;i<=smaller;i++){
        if (smaller%i==0){
            if (larger%i==0){
                num = i;

            }
        }
    }
    printf("%d",num);

    return 0;
}
