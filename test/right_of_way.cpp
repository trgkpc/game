#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include "no_cmake_list.hpp"
#include <iostream>
using namespace std;

int main()
{
    using namespace Driver;
    ::Driver::Driver d1(1);
    ::Driver::Driver d2(2);
    auto right_of_way = Card::make_right_of_way_card();
    auto stop = Card::make_stop_card();

    d1.speed_limit_flag = true;
    cout << "d1:speed limit" << endl;
    d1.print_status();
    cout << endl;

    right_of_way->main(d1, d1);
    cout << "d1 used right of way card" << endl;
    d1.print_status();
    cout << endl;

    stop->main(d2, d1);
    cout << "d1 intended to use stop on d1, but failed" << endl;
    d1.print_status();
    cout << endl;
}
