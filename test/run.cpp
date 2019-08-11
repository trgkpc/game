#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include <iostream>
using namespace std;

int main()
{
    Driver::Driver d1(1);
    auto roll = Card::Roll();
    auto distance25 = Card::DistanceCard("25mile", 25);
    auto distance200 = Card::DistanceCard("200mile", 200);

    roll(d1, d1);
    cout << "d1 used roll" << endl;
    d1.print_status();
    cout << endl;

    distance25(d1, d1);
    cout << "d1 runed 25" << endl;
    d1.print_status();
    cout << endl;

    distance200(d1, d1);
    cout << "d1 runed 200" << endl;
    d1.print_status();
    cout << endl;

    d1.speed_limit_flag = true;
    distance200(d1, d1);
    cout << "d1 tried to run 200, but failed." << endl;
    d1.print_status();
    cout << endl;
}
