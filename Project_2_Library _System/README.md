# Library Management System

📚 This is a simple library management system implemented in C++. It allows you to manage books and users in a library, including adding books and users, searching for books, tracking book borrowings, and more.

## Data Structures

### `struct book`
- Represents a book with the following attributes:
  - `id`: An integer representing the book's unique identifier.
  - `name`: A string representing the book's name.
  - `quantity`: An integer representing the total quantity of this book.
  - `borr`: An integer representing the number of times this book has been borrowed.

### `struct user`
- Represents a user with the following attributes:
  - `name`: A string representing the user's name.
  - `id`: An integer representing the user's unique identifier.
  - `borr_books`: An array of `book` structures representing the books borrowed by the user.
  - `num_borr`: An integer representing the number of books borrowed by the user.

### `struct library`
- Represents the library, containing arrays of books and users, and it also keeps track of the number of books and users.
- Functions within the `library` structure are used to perform various library management tasks.

## Functions

### `bool compare_books_id(book &b1, book &b2)`
- Comparison function for sorting books by their IDs.

### `bool compare_books_name(book &b1, book &b2)`
- Comparison function for sorting books by their names and, if names are the same, by their IDs.

### `void library::add_book()`
- Allows adding a new book to the library by inputting its ID, name, and quantity.

### `void library::search_by_prefix()`
- Allows searching for books in the library by a name prefix entered by the user.

### `void library::print_who_borr_name()`
- Prints the names of users who have borrowed a book with a specific name.

### `void library::print_lib_id()`
- Prints the library's book information sorted by book ID.

### `void library::print_lib_name()`
- Prints the library's book information sorted by book name.

### `void library::add_user()`
- Allows adding a new user to the library by inputting their name and ID.

### `void library::user_borrow_book()`
- Allows a user to borrow a book by entering the user's name and the book's name.

### `void library::user_return_book()`
- Allows a user to return a book by entering the user's name and the book's name.

### `void library::print_users()`
- Prints a list of users, along with the IDs of the books they have borrowed.

## Library Management

### `void library_system()`
- The main function that sets up and runs the library management system. It creates a `library` object and provides a menu for users to choose various library operations.

## Main

### `int main()`
- Initializes the library system, reads input from a file ("books.txt" in this case), and starts the library management system.

👋 Feel free to use, modify, or improve this simple library management system for your own projects!
