#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include <iostream>
using namespace std;

int main()
{
    Driver::Driver d1(1);
    Driver::Driver d2(2);
    auto repair = Card::make_repair_card();
    //    auto accident = Card::Accident();

    d1.print_status();
    //    accident(d2, d1);
    d1.status = Driver::DriverStatus::Accident;
    cout << "d2 used acccident card on d1" << endl;
    d1.print_status();
    cout << endl;

    repair->main(d2, d1);
    cout << "d2 intended to repair d1, but failed" << endl;
    d1.print_status();
    cout << endl;

    repair->main(d1, d1);
    cout << "d1 repaired d1" << endl;
    d1.print_status();
    cout << endl;
}
