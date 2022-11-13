#include <string>

/*!
 * \brief Outcome contains a single outcome on which a bet can be placed.
 *
 * In Roulette, each spin of the wheel has a number of Outcome objects with 
 * bets that will be paid off. For example, the “1” bin has the following 
 * winning Outcome instances: “1”, “Red”, “Odd”, “Low”, “Column 1”, “Dozen 1-12”, 
 * “Split 1-2”, “Split 1-4”, “Street 1-2-3”, “Corner 1-2-4-5”, “Five Bet”, 
 * “Line 1-2-3-4-5-6”, “00-0-1-2-3”, “Dozen 1”, “Low” and “Column 1”. 
 * 
 * All of thee above-named bets will pay off if the wheel spins a “1”. This makes 
 * a Wheel and a Bin fairly complex containers of Outcome objects.
 */
class Outcome
{
public:
    Outcome() = delete;

    /*!
    * \brief Sets the instance name and odds from the parameter name and odds.
    *
    * \param name The name of this outcome.
    * \param odds The payout odds of this outcome.
    */
    explicit Outcome(const char* name, int odds);

    /*!
    * \brief Getter for the name of this outcome.
    * \return Constant reference to the name of this outcome.
    */
    const std::string& getName() const;

    /*!
    * \brief Getter for the odds of this outcome.
    * \return Constant reference to the odds of this outcome.
    */
    const int& getOdds() const;

    /*!
    * \brief Multiply this Outcome’s odds by the given amount. 
    *
    * \param amount Amount being bet.
    * \return The product.
    */
    double winAmount(double amount);

private:
    std::string mName; /*!< Holds the name of the Outcome. Examples include "1", "Red". */
    int mOdds;         /*!< Holds the payout odds for this Outcome. Most odds are stated as 1:1 or 17:1, we only keep the numerator (17) and assume the denominator is 1. */ 
};

/*!
* \brief Compare two Outcome instances (for equality).
*
* \param lhs Reference to the first instance.
* \param rhs Reference to the second instance.
*/
bool operator==(const Outcome& lhs, const Outcome& rhs);

/*!
* \brief Compare two Outcome instances (for non-equality).
*
* \param lhs Reference to the first instance.
* \param rhs Reference to the second instance.
*/
bool operator!=(const Outcome& lhs, const Outcome& rhs);