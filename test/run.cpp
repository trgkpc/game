#include "../card/distance_card.hpp"
#include "../card/roll.hpp"
#include "../player/player.hpp"
#include <iostream>
using namespace std;

int main()
{
    Player::Player p1(1);
    auto roll = Card::Roll();
    auto distance25 = Card::DistanceCard("25mile", 25);
    auto distance200 = Card::DistanceCard("200mile", 200);

    roll(p1, p1);
    cout << "p1 used roll" << endl;
    p1.print_status();
    cout << endl;

    distance25(p1, p1);
    cout << "p1 runed 25" << endl;
    p1.print_status();
    cout << endl;

    distance200(p1, p1);
    p1.print_status();
    cout << endl;

    p1.speed_limit_flag = true;
    distance200(p1, p1);
    cout << "p1 tried to run 200, but failed." << endl;
    p1.print_status();
    cout << endl;
}
