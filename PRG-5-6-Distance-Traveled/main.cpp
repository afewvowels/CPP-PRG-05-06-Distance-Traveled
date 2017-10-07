//
//  main.cpp
//  PRG-5-6-Distance-Traveled
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  The distance a vehicle traels can be calculated as follows:
//  distance = speed * time
//  For example, if a train travels 40 miles per hour for 4 hours, the distance traveled is
//  120 miles.
//  Write a program that asks the user for the speed of a vehicle (in miles per hour) and how
//  many hours it has traveled. The program should be able to then use a loop to display the distance the
//  vehicle has traveled for each hour of that time period. Here is an example of the output:
//
//  What is the speed of the vehicle in mph? 40
//  How many hours has it traveled? 3
//
//  Hour    Distance traveled
//  -------------------------
//  1               40
//  2               80
//  3               120
//
//  Input Validation: Do not accept a negative number for speed and do not accept any
//  value less than 1 for time traveled.

#include <iostream>

using namespace std;

int main()
{
    int intInputSpeed,
        intInputHours,
        intDistanceTraveled;
    
    cout << "Please enter a speed of the vehicle in mph:\n";
    cin >> intInputSpeed;
    
    while(!cin || intInputSpeed <= 0 || intInputSpeed > 1000000)
    {
        cout << "Please enter a valid speed in mph(0-1,000,000):\n";
        cin.clear();
        cin.ignore();
        cin >> intInputSpeed;
    }
    
    cout << "Please enter how many hours it has traveled:\n";
    cin >> intInputHours;
    
    while(!cin || intInputHours <= 1 || intInputHours > 1000000)
    {
        cout << "Please enter a valid time in hours(0-1,000,000):\n";
        cin.clear();
        cin.ignore();
        cin >> intInputHours;
    }
    
    cout << "Hours" << "\t\t" << "Distance Traveled" << endl;
    
    for(int i = 0; i <= intInputHours ; i++)
    {
        intDistanceTraveled = i * intInputSpeed;
        cout << i << "\t\t" << intDistanceTraveled << endl;
    }
    
    return 0;
}
