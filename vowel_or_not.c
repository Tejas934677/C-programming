#include <stdio.h> 
void main(){ 
    while(1){ 
    char c; 
    printf("\nEnter here  "); 
    scanf(" %c",&c); 
    if (c>='A' && c<='Z') printf("\tUpper"); 
    else if (c>='a'&& c <='z') printf("\tLower"); 
    else printf("\tDigit"); 

}}