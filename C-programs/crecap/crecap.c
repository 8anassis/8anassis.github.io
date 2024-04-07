#include<stdio.h>
#include<stdlib.h>
#include "module.h"

typedef void* Pointer;
void* Max_generic(void* a,void* b){
    if(a>=b)
        return a;
    else
        return b;
}
int main(){

    int inta = 3, intb = 2;
    int* max = Max_generic(&inta,&intb);

    float flo1 = 3.3, flo2 = 2.2;
    float* maxf = Max_generic(&flo1,&flo2);

    printf("max: %d\n", *max);
    printf("maxf: %f\n", *maxf);

}

/*int main(){
    printf("foobar\n");

    GameObject my_object = create_game_object();
    print_age(my_object);

    int a = 1;
    //long b = 2;

    Pointer p = &a;
    int* myp = p;
    printf("value of a: %d\n", *myp);

    return 0;
}*/

