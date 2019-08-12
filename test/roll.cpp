#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include <iostream>
using namespace std;

int main()
{
    Driver::Driver d1(1);
    Driver::Driver d2(2);
    auto roll = Card::make_roll_card();

    d1.print_status();

    roll->main(d1, d1);

    d1.print_status();
}
