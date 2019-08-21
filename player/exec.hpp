#include "../card/card.hpp"
#include <algorithm>
#include <random>
#include <vector>
namespace Exec
{
struct Exec {
    Exec()
    {
    }
    void card_init(std::array<double, 19> cards)
    {
        deck = {};
        for (int i = 0; i < 19; i++) {
            card_array.at(i) = Card::make_card(i);
            for (int j = 0; j < cards.at(i); j++) {
                deck.emplace_back(i);
            }
        }
        shuffle();
    }
    void shuffle()
    {
        std::random_device get_rand;
        std::mt19937 get_rand_mt(get_rand());
        std::shuffle(vec.begin(), vec.end(), get_rand_mt);
    }

private:
    std::array<std::shared_ptr<AbstCard>, 19> card_array;
    std::vector<int> deck;
    std::vector<int> drivers;
    std::vector<int> players;
    std::vector<std::vector<int>> players_on_drivers;
};
}  //namespace Exec
