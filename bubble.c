#include <stdio.h> 
void main() { 
    int array[]={1,4,3,4}; 
    int s = 4 ; 
    for (int j = 0 ; j<=4; j++){ 
        int o = 0 ; 
        for (int i=0 ; i<s-j ; i++){
            if (array[i]>array[i+1]){ 
                int temp = array[i]; 
                array[i]= array[i+1]; 
                array[i+1] = temp;
            o=1; } 
           
                 }if (o==0){ break; }
             } 
                for(int i = 0 ; i<=4 ; i++){ 
        printf("%d ", array[i]); 
    }} 