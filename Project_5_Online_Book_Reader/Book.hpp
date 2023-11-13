
# ifndef _BOOk_
# define _BOOk_
#include <iostream>
#include <vector>


class Book { 
    private:
    std::string title;
    std::string author;
    std::vector<std::string> pages;
    


    public:
    Book();
    
    void viewProfile();

};



# endif