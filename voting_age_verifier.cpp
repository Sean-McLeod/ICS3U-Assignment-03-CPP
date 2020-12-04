// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on November 2020
// This program can tell the user if their age is eligible to vote

#include <iostream>


int main()  {
    // this function can tell the user if they are eligible to vote

    const int ELIGIBLE_AGE = 18;
    int age;

    std::cout << "This program will tell you if you are eligible to vote"
              << std::endl;

    // input
    std::cout << "Please type in your age: " << std::endl;
    std::cin >> age;
    std::cout << "" << std::endl;

    // process and output
    if (age >= ELIGIBLE_AGE) {
        std::cout << "You are eligible to vote!" << std::endl;
    } else {
        std::cout << "Sorry, you are not eligible" << std::endl;
    }
}
