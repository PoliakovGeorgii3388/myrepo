#include <stdio.h>
#include "data_input.h"
void data_input(int* array_nums, int* len_arr){
    while(scanf("%d", array_nums)==1){
        array_nums++;
        *len_arr+=1;
    }
}
