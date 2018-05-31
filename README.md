# algorithm-offer
《剑指offer》算法解析

#####1.二维数组中的查找
题目描述:在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

```
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
    if (array.size() == 0)
    {
        return false;
    }
    
    
    // 因为左右、上下都是有序递增，每一列的size肯定也一样长（也就是取第0个和其他都是一样的size）
    int y0_count = (int)array[0].size();
    
    for (int y = 0 , x = y0_count -1 ; y < array.size() && x >= 0 ;)
    {
        int yx_value = array[y][x];
        if (yx_value == target)
        {
            return true;
        }
        
        if (target > yx_value)
        {
            y++;
            continue;
        }
        
        if (target < yx_value)
        {
            x --;

            continue;
        }
    }

    return false;
    }
};

```