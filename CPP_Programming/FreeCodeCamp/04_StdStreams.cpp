//  std::cout       => Output
//  std::cin        => Input
//  std::cerr       => Error
//  std::clog       => Logs

#include <iostream>
// #include <string>
using namespace std;

int main(){
    // COUT
    // cout << "Hello World !" << endl;

    // COUT with Number
    // cout << "The Number is " << 13 << endl;

    // COUT with Variable
    // int x {21};
    // cout << "X is " << x << endl;

    // CERR
    // cerr << "std::cerr output : Something Went Wrong" << endl;

    // CLOG
    // clog << "std::clog output : This is a Log Message" << endl;

    // CIN
    // int age;
    // string name;
    
    // CIN string
    // cout << "Please Type your Name : " << endl;
    // cin >> name;

    // CIN number
    // cout << "Please Type your Age : " << endl;
    // cin >> age;

    // CIN in One Line
    // cout << "Please type your name and age, seperated by spaces : ";
    // cin >> name >> age;
    // cout << "Hello " << name << ". You are " << age << " years old." << endl;

    // CIN with spaces
    string tag;
    cout << "Type a TagLine : ";
    getline(cin,tag);
    cout << "The Tagline is \"" << tag << "\".";
}