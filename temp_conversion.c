#include <stdio.h>

int main() {
    float tempc, tempf;
    printf("enter temp in celcius: ");
    scanf("%f",&tempc);
    tempf = (tempc*9)/5 +32;
    printf("temp in farenheit: %f",tempf);
    return 0;
}
