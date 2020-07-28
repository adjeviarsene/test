#include<stdlib.h>
#include<stdint.h>
#include<stdio.h>
#include"mytest.h"

#define MAX 20

 typedef struct 
{
    uint16_t hight;
    uint16_t base;
}triangle;
triangle *new_triangel(){
    return(triangle*)malloc(sizeof(triangle));
}
void triangle_init(triangle* myt){
    
}
 void destroy_triangle(struct triangle*);
