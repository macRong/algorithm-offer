//
//  main.cpp
//  001-字符串转整数
//
//  Created by macRong on 2018/12/28.
//  Copyright © 2018 macRong. All rights reserved.
//

#include <iostream>
using namespace std;

int test(char* string = NULL)
{
    if (string == NULL) {
        return 0;
    }
    
    int number = 0;
    while (*string != '\0') {
        number = number*10 + *string-'0';
        ++string ;
    }
    
    return number;
}

int main(int argc, const char * argv[])
{
    char s[] = {'1','2','3' , '\0'};
    int num = test(s);
    int num2 = test("123");
    
    cout << "==== " << num << endl << num2 << endl;
    
    return 0;
}
