#include "../card/accident.hpp"
#include "../card/roll.hpp"
#include "../player/player.hpp"
#include <iostream>
using namespace std;

int main()
{
    Player::Player p1(1);
    Player::Player p2(2);
    auto accident = Card::make_accident_card();
    auto roll = Card::Roll();

    cout << "initialized" << endl;

    roll(p1, p1);
    cout << "p1 used roll card" << endl;
    p1.print_status();
    cout << endl;

    accident(p1, p1);
    cout << "p1 intendet to use accident card on itseld, but failed" << endl;
    p1.print_status();
    cout << endl;

    accident(p2, p1);
    cout << "p2 used accident card on p1" << endl;
    p1.print_status();
    cout << endl;

    p2.print_status();
    accident(p1, p2);
    cout << "p1 used accident card on p2" << endl;
    p2.print_status();
}
