#include "ForUnitTesting.hpp"

ForUnitTesting::ForUnitTesting() : mFirstInt(0), mSecondInt(0)
{

}

ForUnitTesting::ForUnitTesting(int firstInt, int secondInt) : mFirstInt(firstInt), mSecondInt(secondInt)
{

}

const int& ForUnitTesting::getFirstInt() const
{
    return mFirstInt;
}

const int& ForUnitTesting::getSecondInt() const
{
    return mSecondInt;
}

void ForUnitTesting::setFirstInt(int newFirstInt)
{
    mFirstInt = newFirstInt;
}

void ForUnitTesting::setSecondInt(int newSecondInt)
{
    mSecondInt = newSecondInt;
}

const int ForUnitTesting::sumOfInts() const
{
    return mFirstInt + mSecondInt;
}

const int ForUnitTesting::differenceOfInts() const
{
    return mFirstInt - mSecondInt;
}