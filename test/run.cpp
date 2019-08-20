#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include "no_cmake_list.hpp"
#include <iostream>
using namespace std;

int main()
{
    Driver::Driver d1(1);
    auto roll = Card::make_roll_card();
    auto distance25 = Card::make_25mile_card();
    auto distance200 = Card::make_50mile_card();

    roll->main(d1, d1);
    cout << "d1 used roll" << endl;
    d1.print_status();
    cout << endl;

    distance25->main(d1, d1);
    cout << "d1 runed 25" << endl;
    d1.print_status();
    cout << endl;

    distance200->main(d1, d1);
    cout << "d1 runed 200" << endl;
    d1.print_status();
    cout << endl;

    d1.speed_limit_flag = true;
    distance200->main(d1, d1);
    cout << "d1 tried to run 200, but failed." << endl;
    d1.print_status();
    cout << endl;

    auto distance_very_long = std::make_shared<Card::DistanceCard>(d1.get_remaining() - 10);
    d1.speed_limit_flag = false;
    distance_very_long->main(d1, d1);
    cout << "d1 speed limit end and runed very long" << endl;
    d1.print_status();
    cout << endl;

    distance25->main(d1, d1);
    cout << "d1 tried to run 25, but failed." << endl;
    d1.print_status();
    cout << endl;
}
