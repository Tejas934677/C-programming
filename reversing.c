#include <stdio.h> 
void main(){ 
    int array[]= { 9,1,2,3,4}; 
    int f = 0 ; int l = 4; 
    while(f<l){ 
        int temp = array[f];
        array[f]=array[l]; 
        array[l]=temp ; 
        f++; 
        l--; } 
for (int i = 0 ; i<=4; i++){ 
    printf("%d ", array[i]); 
}

        
        
    }

