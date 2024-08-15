#include "tse.h"

void tse::tserr( //hanlde all errors 
    std::exception &error, 
    const std::string &additional_info = ""
    ){
        std::cerr << "Tse error: " << error.what() << std::endl;
        if(!additional_info.empty()){
            std::cerr << "Add-info: " << additional_info << std::endl;
        }
};