#include "../card/roll.hpp"
#include "../player/player.hpp"
#include <iostream>
using namespace std;

int main()
{
    Player::Player p1(1);
    p1.print_status();
    auto roll = Card::Roll();
    roll(p1);
    p1.print_status();
}
