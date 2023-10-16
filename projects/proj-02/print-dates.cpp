// Luis Martinez
// SID: 888218645
// This program is my own work.
#include <iostream>
#include <vector>

using namespace std;

bool is_leap_year(int year)
{
    if (year % 400 == 0)
    {
        return true;
    }
    else if ((year % 4 == 0) && (year % 100 != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void print_consecutive_dates(int num)
{
    vector<string> days = {"Sunday",
                           "Monday",
                           "Tuesday",
                           "Wednesday",
                           "Thursday",
                           "Friday",
                           "Saturday"};
    vector<string> months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int day_index = 6;   // Saturday
    int month_index = 0; // January
    string day = days[day_index];
    string month = months[month_index];
    int year = 2000, date = 1, totalDays;

    for (int i = 0; i < num; i++)
    {
        cout << days[day_index] << ", " << months[month_index] << " " << date << ", " << year << "\n";
        // next day
        ++day_index;
        day_index = day_index % 7;
        // accounts for special months that have less than 31 days
        switch (month_index)
        {
        case 1:
            if (is_leap_year(year))
            {
                totalDays = 29;
            }
            else
            {
                totalDays = 28;
            }
            break;
        case 3:
            totalDays = 30;
            break;
        case 5:
            totalDays = 30;
            break;
        case 8:
            totalDays = 30;
            break;
        case 10:
            totalDays = 30;
            break;
        default:
            totalDays = 31;
            break;
        }
        // reintialize month & date on the last day of the year
        if (month_index == 11 && date == 31)
        {
            year++;
            month_index = 0;
            date = 1;
            continue;
        }
        // increment date
        if (date < totalDays)
        {
            ++date;
        }
        else
        {
            // increment month
            ++month_index;
            date = 1;
        }
    }
}

int main()
{
    print_consecutive_dates(16000);
}