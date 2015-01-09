#define UNIT_TESTING 1

#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>

#include <cmocka.h>

#include "todo.h"

static void
test_todo_1(void **state)
{
    (void) state; /* unused */

    /* passing test */
    assert_string_equal(todo(), "do stuff!");
}

static void
test_todo_2(void **state)
{
    (void) state; /* unused */

    /* failing test */
    assert_string_equal(todo(), "do stuff");
}


int
main(void)
{
    const UnitTest tests[] = {
        unit_test(test_todo_1),
        unit_test(test_todo_2)
    };

    return run_tests(tests);
}
