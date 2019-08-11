#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include <iostream>
using namespace std;

int main()
{
    Driver::Driver d1(1);
    Driver::Driver d2(2);
    auto roll = Card::Roll();

    d1.print_status();
    cout << "check_available(d1,d1):" << roll.check_available(d1, d1) << endl;

    roll(d1, d1);

    d1.print_status();
    cout << "check_available(d1,d1):" << roll.check_available(d1, d1) << endl;
    cout << "check_available(d1,d2):" << roll.check_available(d1, d2) << endl;
}
