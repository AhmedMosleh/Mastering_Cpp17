
# ifndef _CUSTOMER_
# define _CUSTOMER_
#include <iostream>
#include <vector>
#include "ReadingSession.hpp"

class Customer { 
    private:
    std::string userName;
    std::string name;
    std::string email;
    int password;

    std::vector<ReadingSession> reading_sessions;



    public:
    Customer();
    Customer(std::string _userName,std::string _name, std::string _email, int _pws);
    void viewProfile();

    void setCustomerData(const Customer & temp) ;
    void setUserName(std::string _user_name);
    void setName(std::string _name);
    void setEmail(std::string _email);
    void setPassword(int _pws);

    std::string getUserName() const;
    std::string getName() const;
    std::string getEmail() const;
    // int getPassword();
    bool checkPassword(int pws) const;

    void addReadingSession();
    int SessionNumber();
};



# endif