#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

std::shared_ptr<Card::DistanceCard> hoge()
{
    return std::make_shared<Card::DistanceCard>(Card::distance_25, 25);
}

int main()
{
    Driver::Driver d1(1);
    Driver::Driver d2(2);

    std::vector<std::shared_ptr<Card::AbstCard>> cards(19);
    auto c1 = std::make_shared<Card::Roll>();
    cards[0] = c1;
    cards[0]->main(d1, d1);
    d1.print_status();
    cout << endl;

    cards[0] = hoge();  //std::make_shared<Card::DistanceCard>(Card::distance_25, 25);
    cards[0]->main(d1, d1);
    d1.print_status();
}
