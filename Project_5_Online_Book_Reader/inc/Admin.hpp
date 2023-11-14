
# ifndef _ADMIN_
# define _ADMIN_
#include <iostream>


class Admin { 
    private:
    std::string userName;
    std::string name;
    std::string email;
    int password;


    public:
    Admin();
    
    void viewProfile();

    void setAdminData(const Admin & temp) ;
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