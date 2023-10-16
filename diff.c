#include "diff.h"
#include "abs_max.h"
#include "abs_min.h"
int diff(int *array_nums, int len_arr){
   return array_nums[abs_max(array_nums, len_arr)]-array_nums[abs_min(array_nums, len_arr)];
}
