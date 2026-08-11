#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter 3 nums");
    scanf("%d %d %d", &a,&b,&c);
    if (a<b){
        if (c<b){
            printf("%d is the largest",b);
        } else{
            printf("%d is the largest",c);
        }
    } else if (a<c){
        printf("%d is the largest",c);
    }
    else{
        printf("%d is the largest",a);
    }
    return 0;
}
