#include "roulette/Outcome.hpp"

Outcome::Outcome(const char* name, int odds) : mName(name)
                                             , mOdds(odds)
{}

const std::string& Outcome::getName() const
{
    return mName;
}

const int& Outcome::getOdds() const
{
    return mOdds;
}

double Outcome::winAmount(double amount)
{
    return mOdds * amount;
}

bool operator==(const Outcome& lhs, const Outcome& rhs)
{
    return (lhs.getName() == rhs.getName()) && (lhs.getOdds() == rhs.getOdds());
}

bool operator!=(const Outcome& lhs, const Outcome& rhs)
{
    return !(lhs == rhs);
}