#pragma once
#include "abst_card.hpp"
#include "distance_card.hpp"
#include "end_of_limit.hpp"
#include "hazard_card.hpp"
#include "remedies_card.hpp"
#include "roll.hpp"
#include "safeties_card.hpp"
#include "speed_limit.hpp"
#include "various_card.hpp"
#include <array>
#include <memory>

namespace Card
{
std::shared_ptr<AbstCard> make_card(int num);
}  // namespace Card
