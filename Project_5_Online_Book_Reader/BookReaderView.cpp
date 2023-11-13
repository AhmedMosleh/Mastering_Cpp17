#include "BookReaderView.hpp"
#include <functional>


void BookReaderView::run() {
    mainLogin();
    loggingMenu();
    viewMenu();




}

void BookReaderView::mainLogin() {
    std::cout << "Please select user type" << std::endl
                << "1. Customer" << std::endl
                << "2. Admin" << std::endl;
    std::cout << "Enter number in range 1-2: "; 
    std::cin >> userType;
}

void BookReaderView::loggingMenu() {
    std::cout<< "Menu:" << std::endl
             << "1. Login" << std::endl
             << "2. Sign up" << std::endl;
    std::cout << "Enter number in range 1-2: "; 
    std::cin >> loggingType;

    if(loggingType == 1) {
        login();
    }
    else if (loggingType == 2) {
        signUp();
    }
}

void BookReaderView::viewMenu() {
    if(userType == 1) {
        customerView();
    }
    else if (userType == 2) {
        adminView();
    }
}

void BookReaderView::login() {
    std::cout << "Enter user name (no spaces): ";

    std::cout << "Enter password (no spaces): ";

}

void BookReaderView::signUp() {
    std::cout << "Enter user name (no spaces): ";

    std::cout << "Enter password (no spaces): ";
    
    std::cout << "Enter name (no spaces): ";

    std::cout << "Enter email (no spaces): ";
}


void BookReaderView::customerView() {
    std::cout << "Hello " << userName << " | Customer View" << std::endl;
    std::cout << "Menu:" << std::endl
        << "1. View Profile" << std::endl
        << "2. List & Select from My Reading History" << std::endl
        << "3. List & Select from Available Books" << std::endl
        << "4. Logout" << std::endl;

    std::cout << "Enter number in range 1-4: "; 
    std::cin >> menuOption;

    switch (menuOption) {
        case 1:
            viewProfile();
            break;
        case 2:
            listReadingHistory();
            break;
        case 3:
            listBooks();
            break;
        case 4:
            // @TODO: logout
            return;
            break;
    }
};

void BookReaderView::adminView() {
    std::cout << "Hello " << userName << " | Admin View" << std::endl;
    std::cout << "Menu:" << std::endl
        << "1. View Profile" << std::endl
        << "2. Add Book" << std::endl
        << "3. Logout" << std::endl;

    std::cout << "Enter number in range 1-3: "; 
    std::cin >> menuOption;

    switch (menuOption) {
        case 1:
            viewProfile();
            break;
        case 2:
            addBook();
            break;
        case 3:
            // @TODO: logout
            return;
            break;
    }
};

void BookReaderView::viewProfile() {
    std::cout << "Name: " << "....." << std::endl
              << "Email: " << "...." << std::endl
              << "User Name: " << "....." << std::endl;
}

void BookReaderView::listBooks() {
    std::cout << "Our current book collection: " << std::endl;

    // @TODO: print available books

    std::cout << "Which book to read?" << std::endl;
    std::cout << "Enter number in range 1 - " << "@numberofbooks" << ": ";

    // @TODO: select a book
    int booknum {};
    std::cin >> booknum;


    // @TODO: create new session 
    std::cout << "Current Page: " << "@currentpage" << "/" << "@totalnumberofbages" << std::endl;
    std::cout << "@pagecontent" << std::endl;


    while (true) {
        std::cout << "Menu: " << std::endl
                << "1. Next Page" << std::endl
                << "2. Pervious Page" << std::endl
                << "3. Stop Reading" << std::endl;
        int book_menu_opt {};
        std::cin >> book_menu_opt;
    
        switch (book_menu_opt) {
            case 1:
                // @TODO: get next page
                std::cout << "Current Page: " << "@currentpage" << "/" << "@totalnumberofbages" << std::endl;
                std::cout << "@pagecontent" << std::endl;
                break;

            case 2:
                // @TODO: get pervious page
                std::cout << "Current Page: " << "@currentpage" << "/" << "@totalnumberofbages" << std::endl;
                std::cout << "@pagecontent" << std::endl;
                break;
            case 3:
                // @TODO: save the session data (page number , date, time)
                return;
                break;
        }
    }

   
}

void BookReaderView::listReadingHistory() {
    // @TODO: cout the sessions 
    std::cout << "@coutthesessions" << std::endl;

    std::cout << "Which session to open?" << std::endl;

    // @TODO:
    std::cout << "Enter number in range 1 - " << "@numberofsessions" << " : ";
    int session_num {};
    std::cin >> session_num;

    // @TODO: open the session.
}



void BookReaderView::addBook() {
    std::cout << "Enter ISBN: ";
    // std::cin >>

    std::cout << "Enter Title: ";
    // std::cin >>

    std::cout << "Enter Author Name: ";
    // std::cin >>

    std::cout << "Enter How many pages: ";
    // std::cin >>

    // for loop:
    std::cout << "Enter page # " << "@i" << ": ";
    // std::cin >>
    
}