#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include <iostream>
using namespace std;

int main()
{
    using namespace Driver;
    ::Driver::Driver d1(1);
    ::Driver::Driver d2(2);
    auto speed_limit = Card::SpeedLimit();
    auto end_of_limit = Card::EndOfLimit();

    speed_limit(d2, d1);
    cout << "d2 used speed limit on d1" << endl;
    d1.print_status();
    cout << endl;

    end_of_limit(d1, d1);
    cout << "d1 used end of limit" << endl;
    d1.print_status();
    cout << endl;
}
