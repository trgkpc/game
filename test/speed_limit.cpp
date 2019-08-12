#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include <iostream>
using namespace std;

int main()
{
    using namespace Driver;
    ::Driver::Driver d1(1);
    ::Driver::Driver d2(2);
    auto speed_limit = Card::make_speed_limit_card();
    auto end_of_limit = Card::make_end_of_limit_card();

    speed_limit->main(d2, d1);
    cout << "d2 used speed limit on d1" << endl;
    d1.print_status();
    cout << endl;

    end_of_limit->main(d1, d1);
    cout << "d1 used end of limit" << endl;
    d1.print_status();
    cout << endl;
}
