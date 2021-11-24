#include"Calendar.h"
#include"unity_internals.h"
#include"unity.h"

void setUp(){}

void tearDown(){}


void test_isLeapYear(void)
{
    TEST_ASSERT_EQUAL(pass,isleapyear());
}

void test_calendar(void){
    TEST_ASSERT_EQUAL(pass,calendar());
}

void test_days(void){
    TEST_ASSERT_EQUAL(pass,days());
}        

void test_todayOf(void){
    TEST_ASSERT_EQUAL(pass,todayOf());
}

void test_getName(void){
    TEST_ASSERT_EQUAL(pass,getName());
}

void test_getDayNumber(void){
    TEST_ASSERT_EQUAL(pass,factorial(5));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_isLeapYear);
    RUN_TEST(test_calendar);
    RUN_TEST(test_days);
    RUN_TEST(test_todayOf);
    RUN_TEST(test_getName);
    RUN_TEST(test_getDayNumber);
    
    return UNITY_END();
}
