//
// Created by Hyanice on 24-5-4.
//
#include<iostream>
#include<string>
#include"Admin.h"
#include"user.h"
#include"dish.h"

using namespace std;

void admin_login();

void users_op();

void exit();

int choose_op();

int main() {
    //用户选择登录操作
    int chosen = choose_op();
    while (!chosen) {
        system("cls");
        cout << "输入错误，请重新输入！" << endl;
        chosen = choose_op();
    }

    //登录成功后操作，待修改
    switch (chosen) {
        case 1:
            //admin_op();
            break;
        case 2:
            //users_op();
            break;
        case 3:
            //exit();
            break;
        default:
            break;
    }
}

int choose_op() {
    cout << "**********************************************" << endl
         << "欢迎进入山东大学餐厅反馈系统" << endl
         << "请选择以何种身份登录(请输入相应数字)？" << endl
         << "1.系统管理员" << endl
         << "2.学生/教师用户" << endl
         << "3.退出" << endl;
    char op;
    cin >> op;
    switch (op) {
        case '1':
            admin_login();
            return 1;
        case '2':
            users_op();
            return 2;
        case '3':
            exit();
            return 3;
        default:
            cout << "输入错误，请重新输入！" << endl;
            return 0;
    }
}

void admin_login() {
    std::string _account;
    std::string _password;
    system("cls");
    while (true) {
        cout << "输入账号密码，用回车分隔，输入 exit 退出系统" << endl;
        Admin admin;
        cin >> _account;
        admin.set_account(_account);
        if (_account == "exit") break;
        else {
            cin >> _password;
            admin.set_password(_password);
            bool login_succeed = admin.login(_account, _password);
            if (login_succeed) {
                cout << "登陆成功！" << endl;
                break;
            } else {
                std::cout << "账号或密码错误，登陆失败！" << std::endl;
                continue;//登录失败，重新输入账号密码
            }
        }
    }
}

void users_op() {
    cout << "op" << endl;
}

void exit() {
    cout << "exit" << endl;
}

