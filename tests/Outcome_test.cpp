#include "doctest.h"
#include "roulette/Outcome.hpp"

#include <cmath>
#include <limits>

TEST_CASE("Testing Outcome class") 
{
    Outcome inst1("Red", 1);
    Outcome inst2("Red", 1);
    Outcome inst3("Black", 2);

    CHECK_EQ(inst1, inst2);
    CHECK_EQ(inst1.getOdds(), 1);
    CHECK_EQ(inst1.getName(), std::string("Red"));
    CHECK_NE(inst1, inst3);
    CHECK_NE(inst2, inst3);

    double inst1WinAmount = inst1.winAmount(3.1);
    double inst3WinAmount = inst3.winAmount(6.2);

    CHECK_LE(std::fabs(inst1WinAmount - 3.1), std::numeric_limits<double>::epsilon());
    CHECK_LE(std::fabs(inst3WinAmount - 12.4), std::numeric_limits<double>::epsilon());
}