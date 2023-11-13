# ifndef _BOOKREADERVIEW_
# define _BOOKREADERVIEW_
#include <iostream>
#include <vector>
#include "BookReaderModel.hpp"



class BookReaderView { 
    private:
    BookReaderModel book_reader_model;
    int userType;
    int loggingType;
    int menuOption;
    //could change:
    std::string userName;
    public:
    BookReaderView();
    
    // select cutomer/admin logging
    void mainLogin();
    // select sign up/login
    void loggingMenu();
    void viewMenu();

    void login();
    void signUp();

    void customerView();
    void adminView();

    void viewProfile();
    void listReadingHistory();
    void listBooks();
    void addBook();

    void run();

    

};



# endif