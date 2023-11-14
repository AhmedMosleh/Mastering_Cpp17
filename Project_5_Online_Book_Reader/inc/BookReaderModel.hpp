# ifndef _BOOKREADERMODEL_
# define _BOOKREADERMODEL_
#include <iostream>
#include <vector>
#include "BookManager.hpp"
#include "AdminsManager.hpp"
#include "CustomersManager.hpp"


class BookReaderModel { 
    private:
    BooksManager books_manager;
    AdminsManager admins_manager;
    CustomersManager customer_manager;


    public:
    BookReaderModel();
    
    void addAdmin(const Admin &temp);
    void addCustomer(const Customer &temp);
    void addBook(const Book &temp);

    // Book view
    std::string getBookTitle(int i);

    int booksCount();

    bool isCustomerExists(std::string str_temp);
    Customer* customerLogin(std::string str_temp,int paw_temp);
    Admin* adminLogin(std::string str_temp,int paw_temp);



    

};



# endif