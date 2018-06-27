//
//  main.cpp
//  match points
//
//  Created by a20161104582 on 2018/6/25.
//  Copyright © 2018年 a20161104582. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
//#define racer 6;
using namespace std;

string Trim(string& str)
{
    str.erase(0,str.find_first_not_of(" \t\r\n"));
    str.erase(str.find_last_not_of(" \t\r\n")+1);
    return str;
}
    
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    int i,j,temp,a[5];
    int num;
    ifstream fin("/Users/a20161104582/Desktop/match points/input.csv");
    string line;
    while (getline(fin, line))
    {
        cout <<"选手信息："<<line<<endl;//整行输出
        istringstream sin(line);
        vector<string> fields;//声明一个字符串向量
        string field;
        while (getline(sin,field,','))
        {
            fields.push_back(field);
        }
        string name=Trim(fields[0]);
        string sex=Trim(fields[0]);
        //cout<<"处理后的字符串："<<name<<"\t"<<sex<<"\t"<<num<<endl;
    }
    return EXIT_SUCCESS;
    }
