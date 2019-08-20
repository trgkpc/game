#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include "no_cmake_list.hpp"
#include <iostream>
using namespace std;

int main()
{
    Driver::Driver d1(1);
    Driver::Driver d2(2);
    auto stop = Card::make_stop_card();
    auto roll = Card::make_roll_card();
    roll->main(d1, d1);
    cout << "d1 used roll" << endl;
    d1.print_status();
    cout << endl;

    stop->main(d2, d1);
    cout << "d2 used stop card on d1" << endl;
    d1.print_status();
    cout << endl;

    stop->main(d2, d1);
    cout << "d2 intended to use stop card on d1, but failed" << endl;
    d1.print_status();
    cout << endl;
}
