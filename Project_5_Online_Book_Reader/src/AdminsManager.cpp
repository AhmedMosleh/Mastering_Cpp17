#include "../inc/AdminsManager.hpp"


AdminsManager::AdminsManager() { }

void AdminsManager::addAdmin(const Admin & temp) { 
    admins.push_back(temp);
}

bool AdminsManager::isAdminExists(std::string str_temp) { 
    for(Admin ctr : admins) {
        if(ctr.getName() == str_temp) {
            return 1;
        }
    }
    return 0;
}
Admin* AdminsManager::adminLogin(std::string str_temp,int pws) { 
    for(int i = 0; i < (int) admins.size(); i++) {
        if( admins.at(i).getUserName() == str_temp &&  admins.at(i).checkPassword(pws)) {
            // std::cout << "GREAT!" << std::endl;
            return & admins.at(i);
        }
    }
    return nullptr;
}
void AdminsManager::viewProfile() { }