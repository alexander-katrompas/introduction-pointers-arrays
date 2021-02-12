
#include "functions.h"

void add_100(int *iptr){
    *iptr += 100;
}

void display_array(int *arr, const int ASIZE){
    for(int i=0; i< ASIZE; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fill_array(int *arr, const int ASIZE, int fillnumber){
    for(int i=0; i< ASIZE; i++){
        arr[i] = fillnumber;
    }
}

