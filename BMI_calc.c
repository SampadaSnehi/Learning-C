#include <stdio.h>

int main() {
    float weight,height, final;
    printf("enter weight(in kg) and height(in meters)");
    scanf("%f %f",&weight,&height);
    final = weight/(height*height);
    if (final<18.5){
        printf("underweight");
    } else if (final<24.9 && final>=18.5){
        printf("normal");
    } else{
        printf("obese");
    }

    return 0;
}
