# ifndef _BooksManager_
# define _BooksManager_
#include <iostream>
#include <vector>
#include "Book.hpp"

class BooksManager { 
    private:
    std::vector<Book> books;


    public:
    BooksManager();
    
    void viewProfile();

};



# endif