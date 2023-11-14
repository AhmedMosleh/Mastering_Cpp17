#include "Customer.hpp"

Customer::Customer() {

}

void Customer::setCustomerData(const Customer & temp) {
    this->name = temp.name; 
    this->userName = temp.userName;
    this->email = temp.email;
    this->password = temp.password;
}

void Customer::setUserName(std::string _user_name) {
    this->userName = _user_name;
}
void Customer::setName(std::string _name) {
    this->name = _name;
}
void Customer::setEmail(std::string _email) {
    this->email = _email;
}
void Customer::setPassword(int _pws) {
    this->password = _pws;
}
