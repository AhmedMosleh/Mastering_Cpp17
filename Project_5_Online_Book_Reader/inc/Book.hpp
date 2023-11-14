
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
    Book(std::string _title, std::string _author, std::vector<std::string> _pages);


    void setTitle(std::string);
    void setAuthor(std::string);
    void setPages(std::string);
    void addPage(std::string);

    std::string getTitle() const;
    std::string getAuthor() const; 
    std::string getPage(int i) const;
};



# endif