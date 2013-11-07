
SIMPLETEST_SUIT(one);

SIMPLETEST_CASE(one, hello)
{
    SIMPLETEST_EQUAL(1, 2);
}

SIMPLETEST_CASE(one, world)
{
    SIMPLETEST_EQUAL_MSG(1, 2, "hello world");
}
