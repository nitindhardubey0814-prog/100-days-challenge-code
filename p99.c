//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
int main() {
    char date[20];
    int day, month, year;
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);
    sscanf(date, "%d/%d/%d", &day, &month, &year);
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    if(month >= 1 && month <= 12) 
        printf("Date in dd-Mon-yyyy format: %02d-%s-%d\n", day, months[month-1], year);
     else 
        printf("Invalid month!\n");
    return 0;
}
