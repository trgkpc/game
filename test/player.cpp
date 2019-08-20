#include "../player/player.hpp"
#include "no_cmake_list.hpp"
int main()
{
    using namespace Card;
    Driver::Driver d1(0);
    Driver::Driver d2(1);
    Player::Player p1(d1, 0);
    Player::Player p2(d2, 0);
    auto roll = make_roll_card();
    auto accident = make_accident_card();
    p1.use_card(roll, d1);
    d1.print_status();
    d2.print_status();
    std::cout << std::endl;

    p2.use_card(accident, d1);
    d1.print_status();
    d2.print_status();
    std::cout << std::endl;
}
