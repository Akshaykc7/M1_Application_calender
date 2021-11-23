#include<Calendar.h>

/**
 * @brief function for days
 * @return values
 */

values days()
{
    long days( int y, int m, int d){
    int lastYear;
    lastYear = y - 1;
    return 365L * lastYear + leapYears(lastYear) + todayOf(y,m,d);
}