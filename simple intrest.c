//#include<stdio.h>
//int main(){
  //  float radius;
    //float pi = 3.14;
//    printf("enter radius\n");
//    scanf("%f",&radius);
  //  float v = 4*pi*radius*radius*radius/3;
//    printf("volume of sphere%f\n",v);
//  return 0;
//}


#include<stdio.h>
int main(){
    float p,t,r,si;
    printf("enter p,r,t\n");
    scanf("%f%f%f",&p,&t,&r);
    si = p*r*t/100;
    printf("simple intrest is: %f\n",si);
   
    return 0;
}
