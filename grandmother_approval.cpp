// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on December 2020
// This program determines if grandmother will approve
//      the user dating her grandchild

#include <iostream>
#include <string>

int main() {
    // this function will determine if the user is in the
    //      proper age range

    std::cout << "This program determines if you can date "
              << "the grandmother's grandchild." << std::endl;

    // variable declarations
    const int MIN_AGE = 25;
    const int MAX_AGE = 40;
    std::string userAge;
    int userAgeInt;

    // input
    std::cout << "Enter your age as an integer: ";
    std::cin >> userAge;
    std::cout << "" << std::endl;

    // process
    try {
        userAgeInt = std::stoi(userAge);

        if (userAgeInt > MIN_AGE && userAgeInt < MAX_AGE) {
            // output
            std::cout << "Congrats! Grandmother will approve of you"
                      << " dating her grandchild.";
        } else {
            // output
            std::cout << "Sorry, Grandmother wants someone over " << MIN_AGE
                      << " and under " << MAX_AGE << ".";
        }
    } catch (std::invalid_argument) {
        std::cout << "That's not a number! Try again." << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Good luck with your dating life." << std::endl;
}
