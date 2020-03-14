/*
 *
 *  Edited by Edward Cruz on 03/13/2020
 *  Lab_07 --- personType.cpp 
 *  ** starter file from professor **
 *  
*/

#include "personType.hpp"
#include <iostream>
#include <string>

using namespace std;

void personType::print() const {
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string last) {
    firstName = first;
    lastName = last;
}

string personType::getFirstName() const {
    return firstName;
}

string personType::getLastName() const {
    return lastName;
}

//constructor
personType::personType(string first, string last, int a) {
    firstName = first;
    lastName = last;
    age = a;
}
