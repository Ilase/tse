#include "tse.h"

/*
@brief This functuin handle filemanager errors
@param a link to exception
@param b link to exception description (default = "")

*/
void tse::tserr( //hanlde all errors 
    std::exception &error, 
    const std::string &additional_info = ""
    ){
        std::cerr << "Tse error: " << error.what() << std::endl;
        if(!additional_info.empty()){
            std::cerr << "Add-info: " << additional_info << std::endl;
        }
};