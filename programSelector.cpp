/*
 * programSelector.cpp
 * Simon Bosse
 * 10/8/2021
 * Make sure to #include all the files you are using
 * Add all functions you will want to run into programs
 * Add a case to the switch statement that runs the program
 */

#include "programSelector.h"
#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

void runProgram(){

    //gives list of known programs
    cout << "Which program would you like to run? (type the number inside the brackets)" << endl;
    for(int i=0; i<programs.size(); i++) {
        cout << "[" << i + 1 << "]: " << programs.at(i) << endl;
    }

    //Continually asks users what program they would like to run until a valid answer is given
    int selection = -1;
    while(true){
        cin >> selection;
        //Checks if you selected a valid option, if so, breaking the loop
        if(selection > 0 && selection <= programs.size() + 1){break;}
        cout << "Your selection was outside the bounds please try again" << endl;
    }
    cout << "You have selected " << programs.at(selection - 1) << endl;






    /*
     * ADD SWITCH CASES HERE STATEMENTS HERE
     */
    switch(selection) {
        case 1:


            break;
        case 2:


            break;
        case 3:


            break;
        default:
            break;
    }
}