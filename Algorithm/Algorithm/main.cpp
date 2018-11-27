//
//  main.cpp
//  Algorithm
//
//  Created by macRong on 2018/11/27.
//  Copyright © 2018年 macRong. All rights reserved.
//

#include <iostream>
#include "001-ArrayFindTarget.hpp"

using namespace std;

// 001
void func001()
{
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    FindArrayTarget findArrayTarget;
    findArrayTarget.findTargetFromArray(8, arr);
    
}

int main(int argc, const char * argv[]) {
    func001();

    return 0;
}
