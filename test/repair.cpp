#include "../card/accident.hpp"
#include "../card/repair.hpp"
#include "../card/roll.hpp"
#include "../player/player.hpp"
#include <iostream>
using namespace std;

int main()
{
    Player::Player p1(1);
    Player::Player p2(2);
    auto repair = Card::make_repair_card();
    //    auto accident = Card::Accident();

    p1.print_status();
    //    accident(p2, p1);
    p1.status = Player::PlayerStatus::Accident;
    cout << "p2 used acccident card on p1" << endl;
    p1.print_status();
    cout << endl;

    repair(p2, p1);
    cout << "p2 intended to repair p1, but failed" << endl;
    p1.print_status();
    cout << endl;

    repair(p1, p1);
    cout << "p1 repaired p1" << endl;
    p1.print_status();
    cout << endl;
}
