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

    void addCustomer(const Customer & temp);

    bool isCustomerExists(std::string str_temp);
    Customer* customerLogin(std::string str_temp,int pws);


};



# endif