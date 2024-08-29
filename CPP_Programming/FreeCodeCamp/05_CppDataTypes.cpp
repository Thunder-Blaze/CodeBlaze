//  int     double      float   char
//  bool    void        auto    ...


#include <iostream>
using namespace std;

int main(){

    // Data Representation in different forms

/*
    int number1 = 15;               // Decimal
    int number2 = 017;              // Octal
    int number3 = 0x0f;             // Hexadecimal
    int number4 = 0b00001111;       // Binary

    // All these gives 15 as output
    cout << "Number 1 is " << number1 << endl;
    cout << "Number 2 is " << number2 << endl;
    cout << "Number 3 is " << number3 << endl;
    cout << "Number 4 is " << number4 << endl;
*/


/*
    // Integer DataType

    // Stores Integers
    // Typically occupied 4 bytes

    int elephant_count;          // WARNING - Initializes to Garbage Value

    // Parenthesis Variable Initialization
    int lion_count{};            // Initializes to 0
    int dog_count{10};           // Initializes to 10
    int cat_count{15};           // Initializes to 15
    int domesticAnimals {dog_count + cat_count};         // Initializes to 15

    // Won't compile
    // int bad_intialization {doesnt_exist1 + doesnt_exist2};

    // 2.9 is of type double, with a wider range than Int. ERROR
    // int narrowing_conversion {2.9};
    
    
    
    // Functional Variable Initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count (dog_count + cat_count);

    // Won't compile
    // int bad_intialization (doesnt_exist3 + doesnt_exist4);

    // Information Lost. Less safe than braced Initialization
    int narrowing_conversion (2.9);
    // Outputs Truncated Number
    cout << narrowing_conversion << endl;


    // Assignment Initialization
    // Same as C, Done with "="
*/


    

}