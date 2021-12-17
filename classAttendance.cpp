// Copyright (c) 2021 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Created on: Dec 2021
// This program asks the user for the number of classes held
// and the number they attened to determine if they can write the final exam.
#include <iostream>
#include <iomanip>


int askAgain() {
    std::string askToPlay;
    std::cout << "\033[1;36;38mwould you like to play again(y/n):  ";
    std::cin >> askToPlay;
    if (askToPlay == "y" || askToPlay == "Y") {
        std::string studentName;
        std::string numberOfClassesString;
        int numberOfClassesNumber;
        std::string numberOfClassesAttendedString;
        int numberOfClassesAttendedNumber;
        int averagePercentage;

        // input
        std::cout << "\033[1;36;38mPlease enter the students name: ";
        std::cin >> studentName;

        std::cout << "\033[1;32;38mPlease enter the number of classes held: ";
        std::cin >> numberOfClassesString;

        std::cout << "\033[1;33;38mPlease enter the number of classes the student has attended: ";
        std::cin >> numberOfClassesAttendedString;

        // try catch
        try {
            // convert the user's input to an int
            numberOfClassesNumber = std::stoi(numberOfClassesString);
            std::cout << "" << std::endl;
            numberOfClassesAttendedNumber = std::stoi(numberOfClassesAttendedString);
            std::cout << "" << std::endl;
            // Calculate the percentage
            averagePercentage = (numberOfClassesAttendedNumber/(float)numberOfClassesNumber)*100;

            // check if the guess is correct
            if (averagePercentage >= 75 && averagePercentage <= 100) {
                std::cout << studentName << " attended " << averagePercentage << "% " << "of their classes\n";
                std::cout << "They can write the exam!\n";
            } else if (averagePercentage < 75) {
                std::cout << studentName << " attended " << averagePercentage << "% " << "of their classes\n";
                std::cout << "They can't write the exam!\n";
            } else {
                // Prints if they got it right
                std::cout << "\033[1;36;39mPlease try again it looks like you attened more class than were offered\n";
            }
            // Tells the user that they didn't input an integer
        } catch (std::invalid_argument) {
            // The user did not enter an integer.
            std::cout <<"\033[1;35;38mThese are not an integer\n";
            std::cout << "" << std::endl;
        }
        askAgain();
    } else if (askToPlay == "n" || askToPlay == "N") {
        std::cout << "Thank you for using my app! \n";
    } else {
      std::cout << "Please enter either y/n \n";
      askAgain();
    }
}



int main() {
    // this function uses a compound boolean statement
    std::string studentName;
    std::string numberOfClassesString;
    int numberOfClassesNumber;
    std::string numberOfClassesAttendedString;
    int numberOfClassesAttendedNumber;
    int averagePercentage;

    // input
    std::cout << "\033[1;36;38mPlease enter the students name: ";
    std::cin >> studentName;

    std::cout << "\033[1;32;38mPlease enter the number of classes held: ";
    std::cin >> numberOfClassesString;

    std::cout << "\033[1;33;38mPlease enter the number of classes the student has attended: ";
    std::cin >> numberOfClassesAttendedString;

    // try catch
    try {
        // convert the user's input to an int
        numberOfClassesNumber = std::stoi(numberOfClassesString);
        numberOfClassesAttendedNumber = std::stoi(numberOfClassesAttendedString);
        // Calculate the percentage
        averagePercentage = (numberOfClassesAttendedNumber/(float)numberOfClassesNumber)*100;

        // check if the guess is correct
        if (averagePercentage >= 75 && averagePercentage <= 100) {
            std::cout << studentName << " attended " << averagePercentage << "% " << "of their classes\n";
            std::cout << "They can write the exam!\n";
        } else if (averagePercentage < 75) {
            std::cout << studentName << " attended " << averagePercentage << "% " << "of their classes\n";
            std::cout << "They can't write the exam!\n";
        } else {
            // Prints if they got it right
            std::cout << "\033[1;36;39mPlease try again it looks like you attened more class than were offered\n";
        }

        // Tells the user that they didn't input an integer
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout <<"\033[1;35;38mThese are not an integer\n";
        std::cout << "" << std::endl;
    }
askAgain();
}
