#include<stdio.h>
#include<stdlib.h>
#include"module.h"

//define struct hidden from user
struct game_object{
    int age;
    float my_float;
    char my_char;
};

GameObject create_game_object() {
    GameObject p = malloc(sizeof(struct game_object));
    p->age = 27;
    p->my_float = 2.1;
    p->my_char = 'a';
    return p;   
}

void print_age(GameObject object){
    printf("%d\n", object->age);
}