#include <stdio.h>

int main(){
    int num,fac;
    fac=1;
    scanf("%d",&num);
    int i=1;
    for (int i=1;i<=num;i++){
        fac=fac*i;
    }
    printf("%d",fac);

    return 0;
}

