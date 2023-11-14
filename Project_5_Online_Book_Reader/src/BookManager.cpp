#include "../inc/BookManager.hpp"

BooksManager::BooksManager() {
    addBook(Book("C++ How To Programm","Abas",std::vector<std::string>{"p1","p2","p3","p4","p5"}));
    addBook(Book("Intro TO Algroithms","Abas",std::vector<std::string>{"p1","p2","p3","p4","p5", "p6"}));
    addBook(Book("Intro TO Data Structure","Abas",std::vector<std::string>{"p1","p2","p3","p4"}));


}

void BooksManager::addBook(const Book &temp) {
    books.push_back(temp);
}
// void BooksManager::getBook() {

// }

int BooksManager::booksCount() {
    return (int)books.size();
}

std::string BooksManager::getBookTitle(int i) {
    return books.at(i).getTitle();
}