#include <iostream>
using namespace std;


// Here a and b are called parameters
int addNumbers(int a, int b){
    return (a + b);
}

int main(){
    
    int firstNumber {23}; // Another way of giving value to a var
    int secondNumber {7};
    cout << "First Number : " << firstNumber << endl;
    cout << "Second Number : " << secondNumber << endl;
    // Here firstNumber & secondNumber are Aarguments
    int sum = addNumbers(firstNumber,secondNumber);
    cout << "Sum = " << sum << endl;
    return 0;

}