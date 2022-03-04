#include "unity.h"
#include "bookmanagement.h"
void setUp()
{

}
void tearDown()
{

}
void test_searchbook(void)
{
    TEST_ASSERT_EQUAL_INT32(1,searchbook("1"));
}
void test_deletebook(void)
{
    TEST_ASSERT_EQUAL_INT32(1,deletebook("1"));
}

int test_main(void)
{
  UNITY_BEGIN();

  RUN_TEST(test_searchbook);
  RUN_TEST(test_deletebook);


  return UNITY_END();
}
