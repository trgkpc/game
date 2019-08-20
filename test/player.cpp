#include "../player/player.hpp"
#include "no_cmake_list.hpp"
int main()
{
    using namespace Card;
    Driver::Driver d1(0);
    Driver::Driver d2(1);
    Player::Player p1(d1, 0);
    Player::Player p2(d2, 0);
    Player::Player p3(d1, 0);
    Player::Player p4(d2, 0);
    auto roll = make_roll_card();
    auto accident = make_accident_card();
    auto repair = make_repair_card();
    auto run25 = make_25mile_card();

    std::cout << "start" << std::endl;

    std::cout << "p1 used roll card on d1" << std::endl;
    p1.use_card(roll, d1);
    d1.print_status();
    d2.print_status();
    std::cout << std::endl;

    std::cout << "p2 used accident card on d1" << std::endl;
    p2.use_card(accident, d1);
    d1.print_status();
    d2.print_status();
    std::cout << std::endl;

    std::cout << "p3 used repair card on d1" << std::endl;
    p3.use_card(repair, d1);
    d1.print_status();
    d2.print_status();
    std::cout << std::endl;

    std::cout << "p4 used roll card on d2" << std::endl;
    p4.use_card(roll, d2);
    d1.print_status();
    d2.print_status();
    std::cout << std::endl;

    std::cout << "p1 used roll card on d1" << std::endl;
    p1.use_card(roll, d1);
    d1.print_status();
    d2.print_status();
    std::cout << std::endl;

    std::cout << "p2 used 25mile card on d2" << std::endl;
    p2.use_card(run25, d2);
    d1.print_status();
    d2.print_status();
    std::cout << std::endl;
}
