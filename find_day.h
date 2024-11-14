// test.h
#include <iostream>
using namespace std;

const int normal_yr = 365;
const int leap_yr = 366;
const int all_leap_years[49] = {
    1904, 1908, 1912, 1916, 1920, 1924, 1928, 1932, 1936,
    1940, 1944, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976,
    1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016,
    2020, 2024, 2028, 2032, 2036, 2040, 2044, 2048, 2052, 2056,
    2060, 2064, 2068, 2072, 2076, 2080, 2084, 2088, 2092, 2096};

const string day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

void show_leap_year()
{
    for (int i = 0; i < 49; i++)
    {
        cout << all_leap_years[i] << endl;
    }
}

void show_day()
{
    for (int i = 0; i < 7; i++)
    {
        cout << day[i] << " ";
    }
}