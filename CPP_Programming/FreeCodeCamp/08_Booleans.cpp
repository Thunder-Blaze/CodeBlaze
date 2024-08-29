#include <iostream>
using namespace std;

int main(){
    bool red_light {true};
    bool green_light {false};

    if (red_light == true){
        cout << "Stop!" << endl;
    } else {
        cout << "Go Through!" << endl;
    }

    if (green_light) {
        cout << "Light is Green !" << endl;
    } else {
        cout << "Light is NOT Green !" << endl;
    }

    // Prints 0 & 1
    cout << endl << "red_light : " << red_light << endl;
    cout << "green_light : " << green_light << endl;

    // Makes program print True & False
    cout << boolalpha;
    cout << endl << "red_light : " << red_light << endl;
    cout << "green_light : " << green_light << endl;

    // sizeof() -> 1byte
    cout << sizeof(bool) << endl;

    // A byte can store 256 different values.
    // Using it to just cover two states(true/false) is wasteful, especially for
    // devices with hard memory constraints.
    // There are techniques to pack even more data into a byte.
}