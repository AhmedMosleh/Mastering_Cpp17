
# ifndef _AdminsManager_
# define _AdminsManager_
#include <iostream>
#include <vector>
#include "Admin.hpp"

class AdminsManager { 
    private:
    std::vector<Admin> admins;


    public:
    AdminsManager();
    
    void addAdmin(const Admin & temp);

    bool isAdminExists(std::string str_temp);
    Admin* adminLogin(std::string str_temp,int pws);
    void viewProfile();

};



# endif