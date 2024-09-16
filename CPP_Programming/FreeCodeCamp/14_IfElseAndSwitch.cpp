#include <bits/stdc++.h>
using namespace std;

int main(){
    int number1 {55};
    int number2 {60};

    bool result = (number1 < number2);
    cout << boolalpha << "Result : " << result << endl;

    cout << endl << "Free Standing If Statement" << endl;

    // if(result){
    if (result==true){
        cout << number1 << " is less than " << number2 << endl;
    }

    // if(!result){
    if (!(result==true)){
        cout << number1 << " is NOT less than " << number2 << endl;
    }
    





    cout << endl << "Using ELse Statement" << endl;
    
    if (result==true){
        cout << number1 << " is less than " << number2 << endl;
    } else {
        cout << number1 << " is NOT less than " << number2 << endl;
    }




    // Multiple if
    bool red = false;
    bool green {true};
    bool yellow {false};
    bool police_stop {true};
    cout << endl;
    if (red){
        cout << "Stop" << endl;
    } 
    if (yellow){
        cout << "Slow Down" << endl;
    }
    if (green){
        cout << "Go" << endl;
    }



    // Nested if
    cout << endl;
    if (green){
        if (police_stop){
            cout << "Stop" << endl;
        } else {
            cout << "Go" << endl;
        }
    }
    
    
    
    // Nesting Alternative
    cout << endl;
    if (green && !police_stop){
        cout << "Go" << endl;
    } else {
        cout << "Stop" << endl;
    }





    // Else if clause
    const int Pen {10};
    const int Marker {20};
    const int Eraser {30};
    const int Rectangle {40};
    const int Circle {50};
    const int Ellipse {60};

    int tool {Ellipse};

    cout << endl;
    if(tool == Pen){
        cout << "Active Tool is Pen" << endl;
    } else if(tool == Marker){
        cout << "Active Tool is Marker" << endl;
    } else if(tool == Eraser){
        cout << "Active Tool is Eraser" << endl;
    } else if(tool == Rectangle){
        cout << "Active Tool is Rectangle" << endl;
    } else if(tool == Circle){
        cout << "Active Tool is Circle" << endl;
    } else if(tool == Ellipse){
        cout << "Active Tool is Ellipse" << endl;
    }


    // Switch Alternative
    // We can only use int, char. long, unsigned short and such data types in switch case statement and also (Enum - will learn in future)
    tool = Eraser;
    cout << endl;
    switch(tool) {
        case Pen:
            cout << "Active Tool is Pen" << endl;
            break;
        case  Marker:
            cout << "Active Tool is Marker" << endl;
            break;
        case Eraser:
            cout << "Active Tool is Eraser" << endl;
            break;
        case Rectangle:
            cout << "Active Tool is Rectangle" << endl;
            break;
        case Circle:
            cout << "Active Tool is Circle" << endl;
            break;
        case Ellipse:
            cout << "Active Tool is Ellipse" << endl;
            break;
        default:
            cout << "Can't Match any Tool" << endl;
            break;
    }




    // Ternary Operator
    int max {};
    int a {35};
    int b {20};
    max = ((a>b)?a:b);
    // max = {(a>b)?a:b};
    cout << "Max : " << max << endl;
}