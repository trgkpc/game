#include "../card/card.hpp"
#include "../player/player.hpp"
#include <iostream>
using namespace std;

int main()
{
    using namespace Player;
    ::Player::Player p1(1);
    ::Player::Player p2(2);
    auto speed_limit = Card::SpeedLimit();
    auto end_of_limit = Card::EndOfLimit();

    speed_limit(p2, p1);
    cout << "p2 used speed limit on p1" << endl;
    p1.print_status();
    cout << endl;

    end_of_limit(p1, p1);
    cout << "p1 used end of limit" << endl;
    p1.print_status();
    cout << endl;
}
