#include "../inc/Book.hpp"


Book::Book() {

}

Book::Book(std::string _title, std::string _author, std::vector<std::string> _pages) :
    title(_title),author(_author),pages(_pages) {

}


void Book::setTitle(std::string str) {
    this->title = str;
}
void Book::setAuthor(std::string str) {
    this->author = str;
}
void Book::setPages(std::string str) {
    pages.push_back(str);
}

void Book::addPage(std::string str) {
    pages.push_back(str);
}


std::string Book::getTitle() const {
    return this->title;
}
std::string Book::getAuthor() const{
    return this->author;
}
std::string Book::getPage(int i) const {
    // if(i < )
    return this->pages.at(i);
}

