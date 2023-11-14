#include "../inc/BookReaderView.hpp"
#include "../inc/BookReaderModel.hpp"
#include <functional>

BookReaderView::BookReaderView(): customer_user(nullptr), admin_user(nullptr) {

}

void BookReaderView::run() {
    mainMenu();
}



void BookReaderView::mainMenu() {
    while (true) {
        // 1. cutomer/admin menu
        std::cout << "****************** USER MENU ******************" << std::endl
                    << "|___ 1. Customer" << std::endl
                    << "|___ 2. Admin" << std::endl;
        std::cout << "- Enter number in range 1-2: "; 
        std::cin >> userType;

        // 2. sign up/login menu
        std::cout<< "****************** LOGING MENU ******************" << std::endl
                    << "|___ 1. Login" << std::endl
                    << "|___ 2. Sign up" << std::endl;
        std::cout << "- Enter number in range 1-2: "; 
        std::cin >> loggingType;

        if(loggingType == 1) {
            login();
        }
        else if (loggingType == 2) {
            signUp();
        }

        // 3. user menu (admin menu or customer menu)
        if(userType == 1) {
            customerViewMenu();
        }
        else if (userType == 2) {
            adminViewMenu();
        }
    }
}

void BookReaderView::login() {
    std::string str_temp {""};
    int pws {};
    std::cout << "- Enter user name (no spaces): ";
    std::cin >> str_temp;
    std::cout << "- Enter password (no spaces): ";
    std::cin >> pws;

    
    if(userType == 1) {
        customerLogin(str_temp, pws);
    }
    else {
        adminLogin(str_temp, pws);
    }

}

void BookReaderView::customerLogin(std::string str_temp,int pws) {
    customer_user = book_reader_model.customerLogin(str_temp, pws);
    if(customer_user == nullptr) {
        std::cout << "* NOT FOUND!!" << std::endl;
    }
}

void BookReaderView::adminLogin(std::string str_temp,int pws) {
    admin_user = book_reader_model.adminLogin(str_temp, pws);
    if(admin_user == nullptr) {
        std::cout << "* NOT FOUND!!" << std::endl;
    }
}


void BookReaderView::signUp() {

    if(userType == 1) {
        customerSignUp();
    }
    else {
        adminSignUp();
    }

}

void BookReaderView::adminSignUp() {
    std::string str_temp {""};
    int pws {};
    std::cout << "- Enter user name (no spaces): ";
    std::cin >> str_temp;
    temp_admin.setUserName(str_temp);

    std::cout << "- Enter password (no spaces): ";
    std::cin >> pws;
    temp_admin.setPassword(pws);  

    std::cout << "- Enter name (no spaces): ";
    std::cin >> str_temp;
    temp_admin.setName(str_temp);

    std::cout << "- Enter email (no spaces): ";
    std::cin >> str_temp;
    temp_admin.setEmail(str_temp);
    book_reader_model.addAdmin(temp_admin);
    adminLogin(temp_admin.getUserName(),pws);
}

void BookReaderView::customerSignUp() {
    std::string str_temp {""};
    int pws {};
    std::cout << "- Enter user name (no spaces): ";
    std::cin >> str_temp;
    temp_customer.setUserName(str_temp);

    std::cout << "- Enter password (no spaces): ";
    std::cin >> pws;
    temp_customer.setPassword(pws);  

    std::cout << "- Enter name (no spaces): ";
    std::cin >> str_temp;
    temp_customer.setName(str_temp);

    std::cout << "- Enter email (no spaces): ";
    std::cin >> str_temp;
    temp_customer.setEmail(str_temp);

    book_reader_model.addCustomer(temp_customer);
    customerLogin(temp_customer.getUserName(),pws);
}

void BookReaderView::userMainMenu() {

}

void BookReaderView::customerViewMenu() {
    std::cout << "* Hello " << customer_user->getName() << " | Customer View" << std::endl;
    
    while (true) {
        std::cout << std::endl << "****************** CUSTOMER MENU ******************" << std::endl
            << "|___ 1. View Profile" << std::endl
            << "|___ 2. List & Select from My Reading History" << std::endl
            << "|___ 3. List & Select from Available Books" << std::endl
            << "|___ 4. Logout" << std::endl;

        std::cout << "- Enter number in range 1-4: "; 
        std::cin >> menuOption;

        switch (menuOption) {
            case 1:
                viewProfile();
                break;
            case 2:
                listReadingHistoryMenu();
                break;
            case 3:
                listBooksMenu();
                break;
            case 4:
                // @TODO: logout
                is_logout = 1;
                return;
                break;
        }       
    }

};

void BookReaderView::adminViewMenu() {
    std::cout << "* Hello " << admin_user->getName() << " | Admin View" << std::endl;

    while(true) {
        std::cout << std::endl << "****************** ADMIN MENU ******************" << std::endl
            << "|___ 1. View Profile" << std::endl
            << "|___ 2. Add Book" << std::endl
            << "|___ 3. Logout" << std::endl;

        std::cout << "- Enter number in range 1-3: "; 
        std::cin >> menuOption;

        switch (menuOption) {
            case 1:
                viewProfile();
                break;
            case 2:
                addBookView();
                break;
            case 3:
                // @TODO: logout
                is_logout = 1;
                return;
                break;
        }
    }

};

void BookReaderView::viewProfile() {
    std::cout << "|___ Name: " << "....." << std::endl
              << "|___ Email: " << "...." << std::endl
              << "|___ User Name: " << "....." << std::endl;
}

void BookReaderView::listBooksMenu() {
    std::cout << "* Our current book collection: " << std::endl;

    // @TODO: print available books

    int books_count = book_reader_model.booksCount();

    for (int i = 1; i <= books_count; i++) {
        std::cout << "|___ " << i << ". " << book_reader_model.getBookTitle(i) << std::endl;
    }

    std::cout << "* Which book to read?" << std::endl;
    std::cout << "- Enter number in range 1 - " << books_count << ": ";

    // @TODO: select a book
    int booknum {};
    std::cin >> booknum;

    // @TODO: open reading session
    openReadingSession();
   
}

void BookReaderView::listReadingHistoryMenu() {
    // @TODO: 
    std::cout << "@coutthesessions" << std::endl;
    
    std::cout << "* Which session to open?" << std::endl;

    // @TODO:
    std::cout << "- Enter number in range 1 - " << "@numberofsessions" << " : ";
    int session_num {};
    std::cin >> session_num;

    // @TODO: open the session.
}

void BookReaderView::openReadingSession() {
    // @TODO: check if the session exists or not?
    // @TODO: open session if exists.
    // @TODO: or create new session 
    std::cout << "* Current Page: " << "@currentpage" << "/" << "@totalnumberofbages" << std::endl;
    std::cout << "@pagecontent" << std::endl;


    while (true) {
        std::cout << "*** BOOK MENU ***" << std::endl
                << "|___ 1. Next Page" << std::endl
                << "|___ 2. Pervious Page" << std::endl
                << "|___ 3. Stop Reading" << std::endl;
        std::cout << std::endl << "- Enter number in range 1 - 3" << std::endl;
        int book_menu_opt {};
        std::cin >> book_menu_opt;
    
        switch (book_menu_opt) {
            case 1:
                // @TODO: get next page
                std::cout << "* Current Page: " << "@currentpage" << "/" << "@totalnumberofbages" << std::endl;
                std::cout << "@pagecontent" << std::endl;
                break;

            case 2:
                // @TODO: get pervious page
                std::cout << "* Current Page: " << "@currentpage" << "/" << "@totalnumberofbages" << std::endl;
                std::cout << "@pagecontent" << std::endl;
                break;
            case 3:
                // @TODO: save the session data (page number , date, time)
                return;
                break;
        }
    }
}

void BookReaderView::addBookView() {
    std::string temp_str {""};
    std::cout << "- Enter ISBN: ";
    std::cin >> temp_str;
    temp_book.setTitle(temp_str);

    std::cout << "- Enter Title: ";
    std::cin >> temp_str;
    temp_book.setTitle(temp_str);

    std::cout << "- Enter Author Name: ";
    std::cin >> temp_str;
    temp_book.setAuthor(temp_str);

    int pagNums {};
    std::cout << "- Enter How many pages: ";
    std::cin >> pagNums;


    // for loop:
    for (int i = 1; i <= pagNums; i++) {
        std::cout << "- Enter page # " << i << ": ";
        std::cin >> temp_str;
        temp_book.addPage(temp_str);
    }

    book_reader_model.addBook(temp_book);

    
}