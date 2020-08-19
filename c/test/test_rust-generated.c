#include "unity.h"

#include "rust-generated.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_main_call_add_two_from_rust(void)
{
    TEST_ASSERT_EQUAL(add_two(2), 4);   
}

void test_hello_from_rust(void)
{
    hello();
}
