/*
 *
 *  Edited by Edward Cruz on 03/13/2020
 *  Lab_07 --- personType.hpp 
 *  ** starter file from professor **
 *  
*/

#ifndef HPP_personType
#define HPP_personType

#include <string>

using namespace std;

class personType {
   public:
    void print() const;
    //Function to output the first name and last name
    //in the form firstName lastName.

    void setName(string first, string last);
    //Function to set firstName and lastName according
    //to the parameters.
    //Postcondition: firstName = first; lastName = last

    string getFirstName() const;
    //Function to return the first name.
    //Postcondition: The value of the data member firstName
    //               is returned.

    string getLastName() const;
    //Function to return the last name.
    //Postcondition: The value of the data member lastName
    //               is returned.

    personType(string first = "", string last = "", int age = 0);
    //constructor
    //Sets firstName and lastName according to the parameters.
    //The default values of the parameters are empty strings.
    //Postcondition: firstName = first; lastName = last

   protected:
    string firstName;  //variable to store the first name
    string lastName;   //variable to store the last name
    int age;
};

#endif
