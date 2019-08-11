#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include <iostream>
using namespace std;

int main()
{
    Driver::Driver p1(1);
    Driver::Driver p2(2);
    auto repair = Card::make_repair_card();
    //    auto accident = Card::Accident();

    p1.print_status();
    //    accident(p2, p1);
    p1.status = Driver::DriverStatus::Accident;
    cout << "p2 used acccident card on p1" << endl;
    p1.print_status();
    cout << endl;

    repair(p2, p1);
    cout << "p2 intended to repair p1, but failed" << endl;
    p1.print_status();
    cout << endl;

    repair(p1, p1);
    cout << "p1 repaired p1" << endl;
    p1.print_status();
    cout << endl;
}
