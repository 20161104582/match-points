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
#define racer 6;
using namespace std;
/*struct racer{
    char rac_name[20];//选手姓名
    char rac_sex;//选手性别
    int rac_class;//选手班级
    int rac_num[15];//选手电话
    char category[30];//节目类别
    char proname[20];//节目名称
};
struct rater{
    char rat_name[20];//评委姓名
    char rat_sex;//评委性别
    int rat_num[15];//评委电话
};*/


string Trim(string& str)
{
    str.erase(0,str.find_first_not_of(" \t\r\n"));
    str.erase(str.find_last_not_of(" \t\r\n")+1);
    return str;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    int num;
    ifstream fin("/Users/a20161104582/Desktop/match points/input.csv");
    string line;
    while (getline(fin, line))
    {
        cout <<"原使字符串："<<line<<endl;//整行输出
        istringstream sin(line);
        vector<string> fields;//声明一个字符串向量
        string field;
        while (getline(sin,field,','))
        {
            fields.push_back(field);
        }
        string name=Trim(fields[0]);
        string sex=Trim(fields[0]);
        cout<<"处理后的字符串："<<name<<"\t"<<sex<<"\t"<<num<<endl;
    }
    return EXIT_SUCCESS;
    /*int i,j,temp,a[5];
    float ave=0;
    cout<<"请输入5个评委的打分：\n";
    for(i=0;i<5;i++)
        cin>>a[i];
    for(i=0;i<5;i++)
    for(j=1;j<5;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for(i=1;i<4;i++)
        ave+=a[i];
    ave=ave/3;
    cout<<ave<<endl;
    system("pause");
    return 0;*/
}
