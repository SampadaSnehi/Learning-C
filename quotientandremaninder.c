#include <stdio.h>
int main(){
    int dividend, divisor;
    int remainder, quoteint;
    printf("enter dividend and divisor");
    scanf("%d %d",&dividend,&divisor);
    remainder = dividend%divisor;
    quoteint = dividend/divisor;
    printf("remainder is %d quotient is %d", remainder, quoteint);
}