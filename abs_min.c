#include "abs_min.h"
#include "stdlib.h"
#include <limits.h>
int abs_min(int *array_nums, int len_arr){
    int min_num = INT_MAX;
    int ind_min = 0;
    for (int i = 1; i<len_arr; i++){
        if (abs(array_nums[i])<min_num){
            min_num = abs(array_nums[i]);
            ind_min = i;
        }
    }
    return ind_min;

}
