//
// Created by Hyanice on 24-5-4.
//

#include "Admin.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <utility>

std::string Admin::get_account() {
    return account;
}

std::string Admin::get_password() {
    return password;
}

bool Admin::set_account(std::string _account) {
    account = std::move(_account);
    return true;
}

bool Admin::set_password(std::string _password) {
    account = std::move(_password);
    return true;
}

bool Admin::login(const std::string &_account, const std::string &_password) {
    //文件操作
    std::ifstream fin;
    fin.open("admin.txt", std::ios::in);
    if (!fin.is_open()) {
        std::cerr << "cannot open the file";
        return false;
    }
    char buff[1024] = {0};
    while (fin.getline(buff, sizeof(buff))) {
        Admin admin;
        std::stringstream word(buff);
        word >> admin.account >> admin.password;
        if (_account == admin.account && _password == admin.password) {
            return true;
        }
    }
    return false;
}

bool Admin::add_new_admin(std::string _account, std::string _password) {
    std::ifstream fin;
    std::ofstream fout;
    fin.open("Admin.txt", std::ios::in);
    if (!fin.is_open()) {
        std::cerr << "cannot open the file";
        return false;
    }

    return true;
}

bool Admin::delete_existing_admin(std::string _account) {
    return false;
}

bool Admin::change_admin_password(std::string _account, std::string _password) {
    return false;
}

bool Admin::add_dish(std::string _dish_name) {
    return false;
}

bool Admin::delete_dish(std::string _dish_name) {
    return false;
}