#include <stdio.h> 
#include <math.h> 
int main(){ 
    float a,b,c; 
    printf("ENter here the coefficients \n"); 
    scanf("%f %f %f",&a,&b,&c); 
    float d = (b*b) - (4*a*c); 
    if (d>0){ 
        float r1 = (-b + sqrt(d))/(2*a); 
        float r2 = (-b - sqrt(d))/(2*a); 
        printf("The real roots are r1 %f\n r2 %f ", r1 , r2 ); 
    }
    else if (d==0){ 
        float r1 = (-b)/(2*a); 
        printf("the root is %f",r1); 
    }
    else{
        printf("No real roots ");
    }
    return 0 ; 
}