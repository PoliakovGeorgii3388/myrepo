#include <stdio.h>
#include <stdlib.h>
#include "data_input.h"
#include "data_output.h"
#define max_arr_len 100
int main()
{
    int len_arr = 0;
    int array_nums[max_arr_len];
    data_input(array_nums, &len_arr);
    data_output(array_nums, len_arr);
    return 0;
}
