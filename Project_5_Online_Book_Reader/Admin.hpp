
# ifndef _ADMIN_
# define _ADMIN_
#include <iostream>


class Admin { 
    private:
    std::string userName;
    std::string name;
    std::string email;
    int password;


    public:
    Admin();
    
    void viewProfile();

};



# endif