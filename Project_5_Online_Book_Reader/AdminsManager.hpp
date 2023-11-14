
# ifndef _AdminsManager_
# define _AdminsManager_
#include <iostream>
#include <vector>
#include "Admin.hpp"

class AdminsManager { 
    private:
    std::vector<Admin> admins;


    public:
    // AdminsManager();
    
    void viewProfile();

};



# endif