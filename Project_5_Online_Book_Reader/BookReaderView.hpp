# ifndef _BOOKREADERVIEW_
# define _BOOKREADERVIEW_
#include <iostream>
#include <vector>
#include "BookReaderModel.hpp"



class BookReaderView { 
    private:
    // BookReaderModel book_reader_model;
    int userType;
    int loggingType;
    int menuOption;
    bool is_logout;
    //could change:
    std::string userName;
    public:
    // BookReaderView();
    
    void mainMenu();
    // select sign up/login
    void login();
    void signUp();
    // admin/customer menu
    void userMainMenu();
    void customerViewMenu();
    void adminViewMenu();

    void viewProfile();
    void listReadingHistoryMenu();
    void listBooksMenu();
    void openReadingSession();
    void addBook();

    void run();

    

};

// loging mechanism:
// mainLogin() > (loggingMenu() => login() ) > (viewMainMenu => customerViewMenu()) => listReadingHistoryMenu()
//                              => signup()                  => adminViewMenu()     => listBooksMenu()

# endif