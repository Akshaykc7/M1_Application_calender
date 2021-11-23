#include<Calendar.h>
/**
 * @brief function for todayOf
 * @return values
 */

values todayOf()
{
    int todayOf( int y, int m, int d) {
    static int DayOfMonth[] = 
        { -1,0,31,59,90,120,151,181,212,243,273,304,334};
    return DayOfMonth[m] + d + ((m>2 && isLeapYear(y))? 1 : 0);
}