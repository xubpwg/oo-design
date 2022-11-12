#include <string>

/*!
 * \brief Class for printing Hello World.
 *
 * This class is for printing Hello World strings. To tell 
 * the truth, it can print any string that you want. So, it
 * should be called StringPrinter, but it is just for testing.
 */
class HelloWorldPrinter
{
public:

private:
    std::string mHelloWorldString;

public:
    /*!
    * \brief The first variant of constructor.
    *
    * This constructor gives you the opportunity to create object using C-string.
    * \param helloWorldString C-string you want to be printed.
    * \sa HelloWorldPrinter(const std::string& helloWorldString)
    */
    explicit HelloWorldPrinter(const char* helloWorldString);

    /*!
    * \brief The second variant of constructor.
    *
    * This constructor gives you the opportunity to create object using std::string.
    * \param helloWorldString std::string you want to be printed.
    * \sa HelloWorldPrinter(const char* helloWorldString)
    */
    explicit HelloWorldPrinter(const std::string& helloWorldString);

    /*!
    * \brief Printing member function.
    *
    * This function should be called to print internal string to the std::cout.
    */
    void printHelloWorld();
private:

};