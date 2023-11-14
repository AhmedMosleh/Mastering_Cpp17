#include "BookReaderModel.hpp"

BookReaderModel::BookReaderModel() {

}


void BookReaderModel::addCustomer(const Customer &temp) {
    customer_manager.addCustomer(temp);
}


bool BookReaderModel::isCustomerExists(std::string str_temp) {

    return 0;
}


Customer* BookReaderModel::customerLogin(std::string str_temp,int paw_temp) {
    return customer_manager.customerLogin(str_temp, paw_temp);
}
