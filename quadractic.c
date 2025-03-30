#include <stdio.h> 
#include <math.h> 
void main() { 
    float a,b,c,r1 ,r2; 
    printf("Enter three numbers "); 
    scanf("%f %f %f", &a,&b,&c); 
    float d = (b*b)-(4*a*c); 
if (a==0){ printf("Not a quadractic equation"); }
else if(d==0){r1=-b/(2*a) ; printf("roots are equal %f " ,r1);}    
else if (d>0){r1 = (-b+sqrt(d))/(2*a) ;r2 = (-b-sqrt(d))/(2*a);
printf("real and distinct roots %f %f", r1, r2 ); }  
else {r1=-b/(2*a) ;r2=(sqrt(-d)) /(2*a) ; printf("complex roots %f + and - %f",r1 ,r2);}}