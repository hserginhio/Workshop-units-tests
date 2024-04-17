#include "tests_includes.h"

Test(my_array_len, tests_NULL_array)
{
    char **array = NULL;
    cr_assert_eq(my_array_len(array), -1);
}

Test(my_array_len, tests_good_len_array)
{
    char *array[2] = {
        "ici",
        NULL,
    };

    cr_assert_eq(my_array_len(array), 1);
}
