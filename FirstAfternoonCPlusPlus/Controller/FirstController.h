//
//  FirstController.h
//  FirstAfternoonCPlusPlus
//
//  Created by Morris, Seth on 1/23/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef FirstController_h
#define FirstController_h

class FirstController
{
private:
    void specialOutput();
private:
    void useNumbers(int someNumber);
    int impactNumber();
    void usePointerToChange(int * somePointer);
public:
    void start();
    int firstArray [6] = {7, 42, 666, 420, 69};
    double secondArray [4] = {7.8,3.4,8.9,4.5};    
};
#endif /* FirstController_h */
