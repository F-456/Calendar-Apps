#include <iostream>
// testing for using another file header
#include "find_day.h"
using namespace std;

int main()
{
    string response = "";
    cout << "input either 'day' or 'leap year' \n";
    getline(cin, response);

    if (response == "leap year")
    {
        show_leap_year();
    }
    else if (response == "day")
    {
        show_day();
    }

    return 0;
}