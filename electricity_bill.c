#include <stdio.h> 
void main() { 
    int units; 
    float charge; 
    printf("How many units the person used "); scanf("%d",&units); 
    if(units<=200) charge=0.8*units + 100; 
    else if(units<=300 ) charge=(0.8*200)+(0.9*(units-200)) + 100 ;  
    else charge=(units-300)+(200*0.8)+(100*0.9)+100;
    if (charge>400)  charge+=charge*(0.15);
    printf("the bill  %f", charge); 
}