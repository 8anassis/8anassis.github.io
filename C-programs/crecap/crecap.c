#include<stdio.h>
#include<stdlib.h>
#include "module.h"
#include<string.h>

typedef void* Pointer;
typedef int (*CompareFunc)(Pointer,Pointer);

int compare_ints(Pointer a, Pointer b){
    return *(int*)a-*(int*)b;
}

int compare_floats(Pointer a, Pointer b){
    return *(float*)a-*(float*)b;
}

int compare_strings(Pointer a, Pointer b){
    return strcmp(a ,b);
}

Pointer Max_generic(Pointer a,Pointer b, CompareFunc compare){

    if(compare(a,b)>0)
        return a;
    else
        return b;
}


int main(){

    int inta = 3, intb = 5;
    int* max = Max_generic(&inta,&intb, compare_ints);

    float flo1 = 3.3, flo2 = 5.2;
    float* maxf = Max_generic(&flo1,&flo2, compare_floats);

    char* s1 = "abcf" , *s2 = "abce";
    char* maxs = Max_generic(s1,s2,compare_strings);

    printf("max: %d\n", *max);
    printf("maxf: %f\n", *maxf);
    printf("maxs: %s\n", maxs);
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

