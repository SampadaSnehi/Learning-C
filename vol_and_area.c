#include <stdio.h>
#include <math.h>

int main() {
    float rad,h;
    float len,len2 ,surf,vol;
    printf("enter radius and height");
    scanf("%f %f",&rad,&h);
    len2 = pow(rad,2)+pow(h,2);
    len = pow(len2,0.5);
    vol = (3.14)*(rad)*(rad)*(h)/3;
    surf = (3.14)*(rad)*(len);
    printf("surface area is %f, vol is %f", surf, vol);
    return 0;
}
