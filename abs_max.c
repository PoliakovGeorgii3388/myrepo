#include "abs_max.h"
#include "stdlib.h"
int abs_max(int *array_nums, int len_arr){
    int max_num = 0;
    int ind_max = 0;
    for (int i = 1; i<len_arr; i++){
        if (abs(array_nums[i])>max_num){
            max_num = abs(array_nums[i]);
            ind_max = i;
        }
    }
    return ind_max;
}
