#include "build/temp/_test_rust-generated.c"
#include "src/rust-generated.h"
#include "/var/lib/gems/2.5.0/gems/ceedling-0.30.0/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_main_call_add_two_from_rust(void)

{

    UnityAssertEqualNumber((UNITY_INT)((add_two(2))), (UNITY_INT)((4)), (

   ((void *)0)

   ), (UNITY_UINT)(15), UNITY_DISPLAY_STYLE_INT);

}



void test_hello_from_rust(void)

{

    hello();

}
