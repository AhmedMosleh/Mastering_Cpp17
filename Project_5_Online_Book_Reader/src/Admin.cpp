#include "../inc/Admin.hpp"


Admin::Admin() {
    
}

void Admin::viewProfile(){

}
void Admin::setAdminData(const Admin & temp) {
    this->name = temp.name; 
    this->userName = temp.userName;
    this->email = temp.email;
    this->password = temp.password;
}
void Admin::setUserName(std::string _user_name) {
    this->userName = _user_name;
}
void Admin::setName(std::string _name) {
    this->name = _name;
}
void Admin::setEmail(std::string _email) {
    this->email = _email;
}
void Admin::setPassword(int _pws) {
    this->password = _pws;
}

std::string Admin::getUserName() const {
    return this->userName;
}
std::string Admin::getName() const {
    return this->name;

}
std::string Admin::getEmail() const {
    return this->email;

}
// int getPassword();
bool Admin::checkPassword(int pws) const {
    return (this->password == pws);
    
}