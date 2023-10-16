#include "sum.h"
#include "abs_max.h"
int sum(int *array_nums, int len_arr){
    int sum = 0;
    for (int i = abs_max(array_nums, len_arr); i<len_arr;i++){
        sum+=array_nums[i];
    }
    return sum;
}
