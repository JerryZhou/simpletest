
SIMPLETEST_SUIT(two);

SIMPLETEST_CASE(two, hello)
{
    SIMPLETEST_EQUAL(1, 2);
}

SIMPLETEST_CASE(two, world)
{
    SIMPLETEST_EQUAL_MSG(1, 2, "hello world");
}
