#include "../card/card.hpp"
#include "../driver/driver.hpp"
#include <algorithm>
#include <vector>

namespace Player
{
struct Player {
    Player(Driver::Driver& driver, int id) : driver(driver), id(id)
    {
    }

    bool use_card(Card::Kind kind, std::shared_ptr<Card::AbstCard> card, Driver::Driver& target)
    {
        auto itr = std::find(cards.begin(), cards.end(), kind);
        if (itr == cards.end()) {
            return false;
        } else {
            card->main(driver, target);
            cards.erase(itr);
            return true;
        }
    }
    Driver::Driver& driver;
    int id;
    std::vector<Card::Kind> cards;
};
}  //namespace Player
