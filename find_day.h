// test.h
#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

class calendar_data
{
public:
    const int normal_yr = 365;
    const int leap_yr = 366;
    const int all_leap_years[49] = {
        1904, 1908, 1912, 1916, 1920, 1924, 1928, 1932, 1936,
        1940, 1944, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976,
        1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016,
        2020, 2024, 2028, 2032, 2036, 2040, 2044, 2048, 2052, 2056,
        2060, 2064, 2068, 2072, 2076, 2080, 2084, 2088, 2092, 2096};

    const string month[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };

    const string day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    map<int, string> newyear_checkpoint = {
        {1900, "MON"},
        {1910, "SAT"},
        {1920, "THU"},
        {1930, "WED"},
        {1940, "MON"},
        {1950, "SUN"},
        {1960, "FRI"},
        {1970, "THU"},
        {1980, "TUE"},
        {1990, "MON"},
        {2000, "SAT"},
        {2010, "FRI"},
        {2020, "WED"},
        {2030, "TUE"},
        {2040, "SUN"},
        {2050, "SAT"},
        {2060, "THU"},
        {2070, "WED"},
        {2080, "MON"},
        {2090, "SUN"},
        {2100, "FRI"},

    };
};

void show_leap_year()
{

    calendar_data obj;
    for (int i = 0; i < 49; i++)
    {
        cout << obj.all_leap_years[i] << endl;
    }
}

void show_day()
{
    calendar_data obj;
    for (int i = 0; i < 7; i++)
    {
        cout << obj.day[i] << " ";
    }
}

void test_map()
{

    calendar_data obj;
    int year;
    cout << "Available range year 1900-2100\n"
         << "Example 1910,1920...\n"
         << "Invalid example 1911,2024...\n";
    cout << "Enter the year you wish to check for the first day of the year: ";
    cin >> year;
    if (year % 10 == 0 && year >= 1900 && year <= 2100)
    {

        cout << "The first day of year " << year << " is " << obj.newyear_checkpoint.at(year);
    }
    else
    {
        cout << "Wrong format \n";
    }
}

void showing_calendar()
{
    calendar_data obj;
    bool month_done = false;
    int month_count = 0;

    for (int month_count; month_count < 12; month_count++)
    {

        cout << obj.month[month_count] << endl;
        for (int i = 0; i < 7; i++)
        {
            cout
                << obj.day[i] << " ";
        }
        cout << endl;
        for (int x = 0; x <= 31; x++)
        {
            cout << x << setw(6) << " ";
            if (x % 7 == 0)
            {
                cout << endl;
            }
        }
        cout << endl;
    }
    cout << endl;
}

void make_space(int x = 1)
{
    for (int i = 0; i < x; i++)
    {

        cout << "\n";
    }
}