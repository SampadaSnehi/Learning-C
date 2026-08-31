#include <stdio.h>
int main(){
    int num;
    char week[7][4]= {"mon","tue","wed","thu","fri","sat","sun"};
    scanf("%d",&num);
    printf("%s",week[num-1]);
    return 0;
}
