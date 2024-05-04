//
// Created by Hyanice on 24-5-4.
//
#include<iostream>
#include<string>
#include"admin.h"
#include"user.h"
#include"dish.h"

using namespace std;

void admin_op();
void users_op();
void exit();

int main() {
    cout << "**********************************************" << endl
         << "饕在山青！欢迎进入山东大学青岛校区餐厅反馈系统" << endl
         << "请选择以何种身份登录(请输入相应数字)？" << endl
         << "1.系统管理员" << endl
         << "2.学生/教师用户" << endl
         << "3.退出" << endl;
    char op;
    cin>>op;
    switch (op) {
        case '1':
            admin_op();
        case '2':
            users_op();
        case '3':
            exit();
    }
    return 0;
}

void admin_op(){

}

void users_op(){

}

void exit(){

}

