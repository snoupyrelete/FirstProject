//
//  FirstController.cpp
//  FirstProject
//
//  Created by Robson, Dylan on 1/23/17.
//  Copyright © 2017 CTEC. All rights reserved.
//


#include <iostream>
#include "FirstController.h"


using namespace std;

// Angle brackets point to console out - where the stream goes.
// Tells FirstController that start() belongs to it with the :: syntax

void FirstController :: start()
{
    cout << "words here!" << endl;
    int myAge = 18;
    cout << "I am " << myAge << " years old. #swag" << endl;
    cout << "\n";
    
    this->specialOutput();
}

void FirstController :: specialOutput()
{
    int yourAge;
    cout << "How old are you?" << endl;
    cin >> yourAge;
    cout << "You are " << yourAge << " years old." << endl;
    
    cin.ignore();
    
    string yourName;
    cout << "type in your name" << endl;
    getline(cin, yourName);
    cout << "your name is " << yourName << endl;
    
    cout << "Type in your name and age" << endl;
    cin >> yourName >> yourAge;
    cout << "you typed: " << yourName << " and " << yourAge << endl;
}
