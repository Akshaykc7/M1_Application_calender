#include<Calendar.h>

/**
 * @brief function for isLeapYear
 * @return values
 */

values isLeapYear()
{
    int isLeapYear( int y ){
    return(y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0));

    if(isLeapYear(y))
        DayOfMonth[2] = 29;
    printf("\n     %s %d\n%s\n", NameOfMonth[m], y, Week);

}
