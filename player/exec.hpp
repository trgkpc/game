#include "../card/card.hpp"
namespace Exec
{
template <int n>
struct Exec {
    Exec()
    {
    }
    void init(std::array<double, 19> cards)
    {
        for (int i = 0; i < 19; i++) {
            card_array.at(i) = Card::make_card(i);
        }
    }

private:
    std::array<std::shared_ptr<AbstCard>, 19> card_array;
};
}  //namespace Exec
