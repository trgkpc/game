#include "../card/accident.hpp"
#include "../card/roll.hpp"
#include "../player/player.hpp"
#include <iostream>
using namespace std;

int main()
{
    Player::Player p1(1);
    Player::Player p2(2);
    auto card = Card::Accident();
    auto roll = Card::Roll();
    roll(p1, p1);

    p1.print_status();
    cout << "check_available(p1,p1):" << card.check_available(p1, p1) << endl;

    card(p1, p1);

    p1.print_status();
    cout << "check_available(p1,p1):" << card.check_available(p1, p1) << endl;
    cout << "check_available(p1,p2):" << card.check_available(p1, p2) << endl;
}
