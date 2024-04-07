#include "stats.h"


//finding max INT in Array of given size
int find_max(int array[], int size) {
    int temp = INT_MIN;
    for (int i=0; i<size; i++){
        if(array[i]>temp){
            temp=array[i];
        }
    }
    return temp; 
}   

//Generic function
//Finding max of any TYPE between 2 objects.
void* Max_generic(void* a,void* b){
    if(a>=b)
        return a;
    else
        return b;
}

//swaps two integers.
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}