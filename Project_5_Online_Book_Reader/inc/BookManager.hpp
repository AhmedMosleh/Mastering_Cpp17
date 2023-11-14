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


    
    void addBook(const Book &temp);
    Book getBook();
    int booksCount();

    std::string getBookTitle(int i);


};



# endif