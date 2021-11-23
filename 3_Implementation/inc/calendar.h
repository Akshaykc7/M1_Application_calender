/**
 * @file calendar.h
 * @author Akshayn K C (akshay.kc@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _CALENDAR_H_
#define _CALENDAR_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @brief structure for Calendar
 * 
 */

/**
 * @brief return type for function for unit testing
 * 
 */

typedef enum values{
    pass = 1;
    fail = 0;
}values;

/**
 * @brief function to find isLeap year
 * @return values
 */

values isLeapYear();

/**
 * @brief function to leapYears
 * @return values
 */

values leapYears();

/**
 * @brief function to todayOf
 * @return values
 */

values todayOf();

/**
 * @brief function to days
 * @return values
 */

values days();

/**
 * @brief function to calendar
 * @return values
 */
values calendar();
/**
 * @brief function to getDayNumber
 * @return values
 */
values getDayNumber();

/**
 * @brief function to getName
 * @return values
 */

values getName(); 

#endif