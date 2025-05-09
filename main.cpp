#include <fstream>
#include <iostream>

#include "NumbersIndex.cpp";
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
        std::cout << "What is: " << num1  << " + " << num2 << std::endl;
        cin >> answer;

        if (answer == Add(num1, num2)) {

            cout <<  "Correct" << endl;
        }
        else {
            fstream file;
            file << "Answer is: " << num1 << " + " << num2 << " = " << Add(num1, num2);
            file.close();
        }

    }

    if (op == "-") {
        std::cout << "What is: " << num1  << " - " << num2 << std::endl;
        cin >> answer;

        if (answer == Sub(num1, num2)) {

            cout <<  "Correct" << endl;
        }

        else {
            fstream file;
            file << "Answer is: " << num1 << "- " << num2 << " = " << Sub(num1, num2);
            file.close();
        }
    }

    if (op == "*") {
        std::cout << "What is: " << num1  << " * " << num2 << std::endl;
        cin >> answer;

        if (answer == Mul(num1, num2)) {

            cout <<  "Correct" << endl;
        }
        else {
            fstream file;
            file << "Answer is: " << num1 << " * " << num2 << " = " << Mul(num1, num2);
            file.close();
        }

    }


    if (op == "/") {
        std::cout << "What is: " << num1  << " / " << num2 << std::endl;
        cin >> answer;

        if (answer == Div(num1, num2)) {

            cout <<  "Correct" << endl;
        }

        else {
            fstream file;
            file << "Answer is: " << num1 << " / " << num2 << " = " << Div(num1, num2);
            file.close();
        }
    }

}

