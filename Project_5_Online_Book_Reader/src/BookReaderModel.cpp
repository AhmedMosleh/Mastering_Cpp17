#include "../inc/BookReaderModel.hpp"

BookReaderModel::BookReaderModel() {

}


void BookReaderModel::addCustomer(const Customer &temp) {
    customer_manager.addCustomer(temp);
}

void BookReaderModel::addAdmin(const Admin &temp) {
    admins_manager.addAdmin(temp);
}
bool BookReaderModel::isCustomerExists(std::string str_temp) {

    return 0;
}


Customer* BookReaderModel::customerLogin(std::string str_temp,int paw_temp) {
    return customer_manager.customerLogin(str_temp, paw_temp);
}


Admin* BookReaderModel::adminLogin(std::string str_temp,int paw_temp) {
    return admins_manager.adminLogin(str_temp, paw_temp);
}