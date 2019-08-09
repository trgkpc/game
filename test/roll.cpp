#include "../card/roll.hpp"
#include "../player/player.hpp"
#include <iostream>
using namespace std;

int main()
{
    Player::Player p1(1);
    Player::Player p2(2);
    auto roll = Card::Roll();

    p1.print_status();
    cout << "check_available(p1,p1):" << roll.check_available(p1, p1) << endl;

    roll(p1);

    p1.print_status();
    cout << "check_available(p1,p1):" << roll.check_available(p1, p1) << endl;
    cout << "check_available(p1,p2):" << roll.check_available(p1, p2) << endl;
}
