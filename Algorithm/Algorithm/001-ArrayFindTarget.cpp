//
//  001-ArrayFindTarget.cpp
//  TEst
//
//  Created by macRong on 2018/11/27.
//  Copyright © 2018年 macRong. All rights reserved.
//

#include "001-ArrayFindTarget.hpp"
#include <iostream>
using namespace std;

void FindArrayTarget::findTargetFromArray(int target, int array[3][3], int count)
{
    if (count <=0)
    {
        return;
    }
    
    int arrayX_count = 3;
    int arrayCount = count;
    
    for (int y = 0, x = arrayX_count -1; y <= arrayCount -1 && x >= 0; )
    {
        int currentValue = array[x][y];
        if (target == currentValue)
        {
            cout << "x=" << x  << "\ny=" << y<< endl;
            return;
        }
        else if (target > currentValue)
        {
            y ++;
            continue;
        }
        else if(target < currentValue)
        {
            x --;
            continue;
        }
    }
}
