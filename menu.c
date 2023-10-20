#include <stdio.h>
#include <stdlib.h>
#include "data_input.h"
#include "data_output.h"
#define MAX_ARR_LEN 100
int main()
{
    int len_arr = 0;
    int array_nums[MAX_ARR_LEN];
    data_input(array_nums, &len_arr);
    data_output(array_nums, len_arr);
    return 0;
}
