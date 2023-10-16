#include <stdio.h>
#include "data_output.h"
#include "abs_max.h"
#include "abs_min.h"
#include "diff.h"
#include "sum.h"
void data_output(int* array_nums, int len_arr){
    switch (array_nums[0])
    {
    case 0:
        printf("%d\n", array_nums[abs_max(array_nums, len_arr)]);
        break;
    case 1:
        printf("%d\n", array_nums[abs_min(array_nums, len_arr)]);
        break;
    case 2:
        printf("%d\n", diff(array_nums, len_arr));
        break;
    case 3:
        printf("%d\n", sum(array_nums, len_arr));
        break;

    default:
        printf("Данные некорректны\n");
    }
}
