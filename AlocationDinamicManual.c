#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p, i;
    p =  malloc(10*sizeof(int)); // alocate 10 spaces with size of int

    if(p == NULL){
        printf("Not space");
        exit(1);
    }else{
        printf("First 10 numbes\n");
        for(i=0;i<10;i++){
            p[i]=i+10;
            printf("%d-%d\n",i,p[i]);
        }

        p = realloc(p,20*sizeof(int)); // realocate 20 spaces with size of int
        printf("Relocating for more 20 numbes\n");

        for(i=10;i<20;i++){
            p[i]=i+20;
            printf("%d-%d\n",i,p[i]);
        }
        printf("Alls 20 numbes alocate\n");
            for(i=0;i<20;i++){
                printf("%d-%d\n",i,p[i]);
            } 
        free(p); //unalocate spaces
    }
    return(0);
}


