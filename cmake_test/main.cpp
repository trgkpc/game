#include "../card/gen_card.hpp"
#include <iostream>

int main()
{
    auto cards = Card::make_card_array();
    for (int i = 0; i < 19; i++) {
        auto card = cards.at(i);
        std::cout << card->kind << std::endl;
    }
}
