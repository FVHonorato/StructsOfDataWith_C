#include <stdio.h>

static int a =0; //Global variable of alocation static

void increment(){
    int b = 0;  //variable of alocation automatic
    static int c = 0; //variable local, of alocation static
    
    printf("a:%d, b:%d, c:%d\n",a,b,c);
    a++;
    b++;
    c++;
}
int main(void){
    int i;
    for(i=0; i < 5;i++){
        increment();
        
    }
    return(0);
}
