#include<stdio.h>
int main(){
    float radius;
    float pi = 3.14;
    printf("enter radius\n");
    scanf("%f",&radius);
    float v = 4*pi*radius*radius*radius/3;
    printf("volume of sphere%f\n",v);




    return 0;
}

