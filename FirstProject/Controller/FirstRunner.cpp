//
//  FirstRunner.cpp
//  FirstProject
//
//  Created by Robson, Dylan on 1/23/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#include "FirstController.h"

int main()
{
    
    // Allocating memory for FirstController and making pointer (reference) to it (the memory).
    FirstController * app = new FirstController();
    
    // Selector, like a dot (.) in Java [app.start()]
    app->start();
    return 0;
}

