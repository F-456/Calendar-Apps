#include <iostream>
// another file header
#include "find_day.h"
using namespace std;

int main()
{
    string response = "";

    while (response != "end")
    {

        cout << "Command list*****\n"
             << "leap year\n"
             << "day\n"
             << "check_list\n"
             << "test\n"
             << "help\n"
             << "end\n"
             << "******************\n"
             << "input a command:";
        make_space(1);
        getline(cin, response);
        if (response == "leap year")
        {
            show_leap_year();
            make_space(2);
        }
        else if (response == "day")
        {
            show_day();
            make_space(2);
        }
        else if (response == "check_list")

        {
            test_map();
            make_space(2);
        }
        else if (response == "test")
        {
            showing_calendar();
            make_space(2);
        }
        else if (response == "end")
        {

            cout << "Program end\n";
        }
        else
        {
            cout << "invalid intput\n";
            make_space(2);
        }
    }
    return 0;
}