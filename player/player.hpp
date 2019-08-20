#include "../card/card.hpp"
#include "../driver/driver.hpp"

namespace Player
{
struct Player {
    Player(Driver::Driver& driver, int id) : driver(driver), id(id)
    {
    }

    void use_card(std::shared_ptr<Card::AbstCard> card, Driver::Driver& target)
    {
        card->main(driver, target);
    }
    Driver::Driver& driver;
    int id;
};
}  //namespace Player
