//
// Created by Hyanice on 24-5-4.
//

#ifndef RESTAURANT_FEEDBACK_SYSTEM_USER_H
#define RESTAURANT_FEEDBACK_SYSTEM_USER_H

#include <iostream>

class user {
private:
    std::string name;
    std::string number;
    std::string password;

public:
    static bool user_login();

    void display_dishes();

    void search_dishes();

    void commit_comments();
};

#endif //RESTAURANT_FEEDBACK_SYSTEM_USER_H
