//
//  001-ArrayFindTarget.hpp
//  TEst
//
//  Created by macRong on 2018/11/27.
//  Copyright © 2018年 macRong. All rights reserved.
//

/**
 题目描述:
 
 在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
 请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

 */

#ifndef _01_ArrayFindTarget_hpp
#define _01_ArrayFindTarget_hpp

#include <stdio.h>

class FindArrayTarget
{
public:
    void findTargetFromArray(int target, int array[3][3], int count = 3);
};

#endif /* _01_ArrayFindTarget_hpp */
