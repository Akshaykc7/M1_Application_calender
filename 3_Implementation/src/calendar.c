#include<Calendar.h>

/**
 * @brief function for calendar
 * @return values
 */
values calendar()
{
    void calendar(int y, int m){
    FILE *fp;
    Note* notes, note;
    int len, j, hasNote = 0;
    char choice;
    const char *NameOfMonth[] = { NULL/*dummp*/,
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    char Week[] = "Su   Mo   Tu   We   Th   Fr   Sa";
}