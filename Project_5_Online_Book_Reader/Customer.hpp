
# ifndef _CUSTOMER_
# define _CUSTOMER_
#include <iostream>


class Customer { 
    private:
    std::string userName;
    std::string name;
    std::string email;
    int password;


    public:
    Customer();
    
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


};



# endif