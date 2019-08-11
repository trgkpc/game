#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include <iostream>
using namespace std;

int main()
{
    using namespace Driver;
    ::Driver::Driver p1(1);
    ::Driver::Driver p2(2);
    auto right_of_way = Card::make_right_of_way_card();
    auto stop = Card::make_stop_card();

    p1.speed_limit_flag = true;
    cout << "p1:speed limit" << endl;
    p1.print_status();
    cout << endl;

    right_of_way(p1, p1);
    cout << "p1 used right of way card" << endl;
    p1.print_status();
    cout << endl;

    stop(p2, p1);
    cout << "p1 intended to use stop on p1, but failed" << endl;
    p1.print_status();
    cout << endl;
}
