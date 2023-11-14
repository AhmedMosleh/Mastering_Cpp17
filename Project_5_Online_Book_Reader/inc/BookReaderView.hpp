# ifndef _BOOKREADERVIEW_
# define _BOOKREADERVIEW_
#include <iostream>
#include <vector>
#include "BookReaderModel.hpp"
// #include "Customer.hpp"



class BookReaderView { 
    private:
    // temp variables to create/read/update/delete from model
    Customer temp_customer;
    Admin temp_admin;
    Book temp_book;
    BookReaderModel book_reader_model;
    Customer* customer_user;
    Admin* admin_user;

    int userType;
    int loggingType;
    int menuOption;
    bool is_logout;
    //could change:
    std::string userName;

    // private functions
    void login();
    void signUp();
    void customerLogin(std::string str_temp,int pws);
    void customerSignUp();
    void adminLogin(std::string str_temp,int pws);
    void adminSignUp();

    public:
    BookReaderView();
    
    void mainMenu();
    // select sign up/login

    // admin/customer menu
    void userMainMenu();
    void customerViewMenu();
    void adminViewMenu();

    void viewProfile();
    void listReadingHistoryMenu();
    void listBooksMenu();
    void openReadingSession();
    void addBookView();
    void run();
};


# endif