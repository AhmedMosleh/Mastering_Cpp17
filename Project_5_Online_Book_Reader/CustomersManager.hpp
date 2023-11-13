# ifndef _CustomersManager_
# define _CustomersManager_
#include <iostream>
#include <vector>
#include "Customer.hpp"

class CustomersManager { 
    private:
    std::vector<Customer> customers;


    public:
    CustomersManager();
    
    void viewProfile();

};



# endif