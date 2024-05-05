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
    //�û�ѡ���¼����
    int chosen = choose_op();
    while (!chosen) {
        system("cls");
        cout << "����������������룡" << endl;
        chosen = choose_op();
    }

    //��¼�ɹ�����������޸�
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
         << "��ӭ����ɽ����ѧ��������ϵͳ" << endl
         << "��ѡ���Ժ�����ݵ�¼(��������Ӧ����)��" << endl
         << "1.ϵͳ����Ա" << endl
         << "2.ѧ��/��ʦ�û�" << endl
         << "3.�˳�" << endl;
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
            cout << "����������������룡" << endl;
            return 0;
    }
}

void admin_login() {
    std::string _account;
    std::string _password;
    system("cls");
    while (true) {
        cout << "�����˺����룬�ûس��ָ������� exit �˳�ϵͳ" << endl;
        Admin admin;
        cin >> _account;
        admin.set_account(_account);
        if (_account == "exit") break;
        else {
            cin >> _password;
            admin.set_password(_password);
            bool login_succeed = admin.login(_account, _password);
            if (login_succeed) {
                cout << "��½�ɹ���" << endl;
                break;
            } else {
                std::cout << "�˺Ż�������󣬵�½ʧ�ܣ�" << std::endl;
                continue;//��¼ʧ�ܣ����������˺�����
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

