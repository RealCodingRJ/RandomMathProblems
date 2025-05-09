#include <iostream>

#include "NumbersIndex.cpp";
#include "Calculations.h"
#include "Functions.h"
#include "Operators.h"

using namespace std;

int main() {

    srand(time(0));
    int num1 = Numbers(10);
    int num2 = Numbers(5);
    int answer;



    std::string op = operators();

    if (op == "+") {
        std::cout << "What is: " << num1  << " " << " + " << num2 << std::endl;
        cin >> answer;

        if (answer == Add(num1, num2)) {

            cout <<  "Correct" << endl;
        }
    }

    if (op == "-") {
        std::cout << "What is: " << num1  << " " << " - " << num2 << std::endl;
        cin >> answer;

        if (answer == Sub(num1, num2)) {

            cout <<  "Correct" << endl;
        }
    }

    if (op == "*") {
        std::cout << "What is: " << num1  << " * " << num2 << std::endl;
        cin >> answer;

        if (answer == Mul(num1, num2)) {

            cout <<  "Correct" << endl;
        }
    }


    if (op == "/") {
        std::cout << "What is: " << num1  << " / " << num2 << std::endl;
        cin >> answer;

        if (answer == Div(num1, num2)) {

            cout <<  "Correct" << endl;
        }
    }

}

