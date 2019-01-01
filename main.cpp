//
//  main.cpp
//  Login Form (C++)
//
//  Created by EdwardHeat on 12/30/18.
//  Copyright © 2018 HeatDev. All rights reserved.
//

#include <iostream>

using namespace std;



int main() {
    
    string password = "letmein";
    
    string input;
    
    do {
        cout << "Enter your password > " << flush;
        cin >> input;
        
        if(input != password) {
            cout << "Access denied." << endl;
        }
        
    } while (input != password);
    
    
    cout << "Password accepted" << endl;

}
