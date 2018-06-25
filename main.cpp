//
//  main.cpp
//  match points
//
//  Created by a20161104582 on 2018/6/25.
//  Copyright © 2018年 a20161104582. All rights reserved.
//

#include <iostream>
struct racer{
    char rac_name[20];//选手姓名
    char rac_sex;//选手性别
    char rac_class[10];//选手班级
    int rac_num[15];//选手电话
    char category[30];//节目类别
    char proname[20];//节目名称
};
struct rater{
    char rat_name[20];//评委姓名
    char rat_sex;//评委性别
    int rat_num[15];//评委电话
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
