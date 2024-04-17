#include "tests_includes.h"

Test(my_strlen_sepa, tests_simple)
{
    char *str = "manger de viande";
    cr_assert_eq(my_strlen_sepa(str, " "), 6);
}

Test(my_strlen_sepa, tests_STR_NULL)
{
    char *str = NULL;
    cr_assert_eq(my_strlen_sepa(str, ""), -1);
}

Test(my_strlen_sepa, tests_SEPA_NULL)
{
    char *str = "manger ";
    cr_assert_eq(my_strlen_sepa(str, NULL), -1);
}



