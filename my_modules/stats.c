#include "stats.h"

int find_max(int array[], int size) {
    int temp = INT_MIN;
    for (int i=0; i<size; i++){
        if(array[i]>temp){
            temp=array[i];
        }
    }
    return temp; 
}   