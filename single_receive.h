#ifndef SINGLE_RECEIVE_H
#define SINGLE_RECEIVE_H



#include <exec.h>


class single_receive
{
    std::string m_massage;
    std::unordered_map<std::string, int>m_massage_list;
    int m_cmd_id;
    exec *exec_module;

public:
    single_receive(char* );
    void show_command()
    {

    }

    std::string ret_answer();
};

#endif // SINGLE_RECEIVE_H


//#include <sstream>
//#include <iostream>
//#include <cstring>
//#include <string.h>

//class cmd_list
//{
//private:
//    std::string massage_list;
//    cmd_list():massage_list("Weather vk qt youtube"){}
//    cmd_list(const cmd_list&) = delete;
//    cmd_list& operator = (const cmd_list&) = delete;
//   public:
//    static cmd_list &Get_cmd_list()
//    {
//        static cmd_list massage;
//        return massage;
//    }
//    void add_command(std::string &cmd)
//    {
//        massage_list += ' ' + cmd;
//    }
//    void show_command_list()
//    {
//        std::cout << massage_list << std::endl;
//    }


//};
