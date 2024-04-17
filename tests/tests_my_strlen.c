#include "tests_includes.h"

Test(my_strlen, tests_simple_len)
{
    cr_assert_eq(my_strlen("hello"), 5);
}

Test(my_strlen, test_NULL)
{
    char *str = NULL;
    cr_assert_eq(my_strlen(str), -1);
}
