#include <stdio.h> 
#include <string.h> 
struct jk{ 
    int age ; 
    char name[10]; 
}; 
void main() { 
    struct jk self ; 
    self.age = 18; 
    strcpy(self.name,"Tejas"); 
    printf("HI my name is %s and my age is %d", self.name , self.age); 

}