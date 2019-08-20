#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include "no_cmake_list.hpp"
#include <iostream>
using namespace std;

int main()
{
    Driver::Driver d1(1);
    Driver::Driver d2(2);
    auto accident = Card::make_accident_card();
    auto roll = Card::make_roll_card();

    cout << "initialized" << endl;

    roll->main(d1, d1);
    cout << "d1 used roll card" << endl;
    d1.print_status();
    cout << endl;

    accident->main(d1, d1);
    cout << "d1 intendet to use accident card on itseld, but failed" << endl;
    d1.print_status();
    cout << endl;

    accident->main(d2, d1);
    cout << "d2 used accident card on d1" << endl;
    d1.print_status();
    cout << endl;

    d2.print_status();
    accident->main(d1, d2);
    cout << "d1 used accident card on d2" << endl;
    d2.print_status();
}
