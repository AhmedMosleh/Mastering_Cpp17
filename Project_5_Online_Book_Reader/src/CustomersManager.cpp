#include "CustomersManager.hpp"
#include "Customer.hpp"

CustomersManager::CustomersManager() {

}

void CustomersManager::addCustomer(const Customer & temp) {
    customers.push_back(temp);
}


bool CustomersManager::isCustomerExists(std::string str_temp) {
    // @TODO: use std with lambda function

    for(Customer ctr : customers) {
        if(ctr.getName() == str_temp) {
            return 1;
        }
    }
    return 0;
}

Customer* CustomersManager::customerLogin(std::string str_temp,int pws) {
    for(int i = 0; i < (int)customers.size(); i++) {
        if(customers.at(i).getUserName() == str_temp && customers.at(i).checkPassword(pws)) {
            // std::cout << "GREAT!" << std::endl;
            return &customers.at(i);
        }
    }
    return nullptr;
}