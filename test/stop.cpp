#include "../card/card.hpp"
#include "../player/player.hpp"
#include <iostream>
using namespace std;

int main()
{
    Player::Player p1(1);
    Player::Player p2(2);
    auto stop = Card::make_stop_card();
    auto roll = Card::Roll();
    roll(p1, p1);
    cout << "p1 used roll" << endl;
    p1.print_status();
    cout << endl;

    stop(p2, p1);
    cout << "p2 used stop card on p1" << endl;
    p1.print_status();
    cout << endl;

    stop(p2, p1);
    cout << "p2 intended to use stop card on p1, but failed" << endl;
    p1.print_status();
    cout << endl;
}
