#include "doctest.h"
#include "ForUnitTesting.hpp"

TEST_CASE("Testing ForUnitTesting class...") 
{
    SUBCASE("Default constructor") 
    {
        ForUnitTesting instance;

        CHECK(instance.getFirstInt() == 0);
        CHECK(instance.getSecondInt() == 0);
    }

    SUBCASE("Non-default constructor, non-const instance") 
    {
        ForUnitTesting instance(3, 17);

        CHECK(instance.getFirstInt() == 3);
        CHECK(instance.getSecondInt() == 17);
    }

    SUBCASE("Non-default constructor, const instance") 
    {
        const ForUnitTesting instance(213, 467);

        CHECK(instance.getFirstInt() == 213);
        CHECK(instance.getSecondInt() == 467);
    }

    SUBCASE("Sum function") 
    {
        ForUnitTesting instance(3, 17);

        CHECK(instance.sumOfInts() == 20);

        instance.setFirstInt(-7);

        CHECK(instance.sumOfInts() == 10);
    }

    SUBCASE("Difference function") 
    {
        ForUnitTesting instance(213, 13);

        CHECK(instance.differenceOfInts() == 200);

        instance.setFirstInt(-7);

        CHECK(instance.differenceOfInts() == -20);
    }
}