
# ifndef _CUSTOMER_
# define _CUSTOMER_
#include <iostream>


class Customer { 
    private:
    std::string userName;
    std::string name;
    std::string email;
    int password;


    public:
    Customer();
    
    void viewProfile();

};



# endif