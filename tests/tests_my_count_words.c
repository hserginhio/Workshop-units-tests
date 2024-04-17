#include "tests_includes.h"

Test(my_strlen, tests_simple)
{
    char *str = "manger de viande";
    cr_assert_eq(my_count_words(str, " "), 3);
}

Test(my_strlen, tests_NULL)
{ 
    char *str = NULL;
    cr_assert_eq(my_count_words(str, NULL), -1);
}

Test(my_strlen, tests_nothing)
{ 
    char *str = " ";
    cr_assert_eq(my_count_words(str, " "), 0);
}