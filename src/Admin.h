//
// Created by Hyanice on 24-5-4.
//

#ifndef RESTAURANT_FEEDBACK_SYSTEM_ADMIN_H
#define RESTAURANT_FEEDBACK_SYSTEM_ADMIN_H

#include<string>

class Admin {
private:
    std::string account;
    std::string password;

public:
    std::string get_account();

    std::string get_password();

    bool set_account(std::string);

    bool set_password(std::string);

    bool login(const std::string& _account, const std::string& _password);

    bool add_new_admin(std::string _account, std::string _password);

    bool delete_existing_admin(std::string _account);

    bool change_admin_password(std::string _account, std::string _password);

    bool add_dish(std::string _dish_name);//待修改，不知道菜色具体内容

    bool delete_dish(std::string _dish_name);
};


#endif //RESTAURANT_FEEDBACK_SYSTEM_ADMIN_H
