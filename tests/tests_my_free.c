#include "tests_includes.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

Test(my_free, test_simple_free)
{
    my_free(NULL);
}
