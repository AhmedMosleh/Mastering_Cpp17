#include "../inc/Customer.hpp"

Customer::Customer() {

}

Customer::Customer(std::string _userName,std::string _name, std::string _email, int _pws): userName(_userName), name(_name), email(_email),password(_pws) {
    
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

std::string Customer::getUserName() const {
    return this->userName;
}
std::string Customer::getName() const {
    return this->name;

}
std::string Customer::getEmail() const {
    return this->email;

}
// int getPassword();
bool Customer::checkPassword(int pws) const {
    return (this->password == pws);
}


void Customer::addReadingSession() {
    
}

int Customer::SessionNumber() {
    return (int)reading_sessions.size();
}
