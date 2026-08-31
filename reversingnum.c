#include <stdio.h>
int main(){
    int num,a;
    scanf("%d",&num);
    do{
        a=num%10;
        num = num/10;
        printf("%d",a);
    }while(num>0);

    return 0;
}
