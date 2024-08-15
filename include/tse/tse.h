#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <filesystem> // !!
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>


namespace tse
{
    void tserr(std::exception &error, const std::string &additional_info = ""); //error_handler

    class tse{
        //=================================================================================
        std::filesystem::path curd;                 //current_directory
        public:                                     //public
        std::vector<std::filesystem::path> fl;      //file_list
        tse();                                      //init
        void s_fl(std::filesystem::path &p);        //set_filelist_(by_path)
        void g_fl(std::filesystem::path &p);        //
        void cd(std::filesystem::path &p);          //change_directory
        std::filesystem::path g_curd() noexcept;    //get_current_directory
        //=================================================================================
        void mv();  //in_dev
        void cp();
        void bash(std::filesystem::path &f);

    };

    void s_dl(const std::filesystem::path p, std::vector<std::filesystem::path> &dl);

} // namespace tse


#endif