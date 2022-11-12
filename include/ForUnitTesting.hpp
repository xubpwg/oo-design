class ForUnitTesting
{
public:
    ForUnitTesting();
    explicit ForUnitTesting(int firstInt, int secondInt);

    const int& getFirstInt() const;
    const int& getSecondInt() const;

    void setFirstInt(int newFirstInt);
    void setSecondInt(int newSecondInt);

    const int sumOfInts() const;
    const int differenceOfInts() const;

private:
    int mFirstInt;
    int mSecondInt;
};