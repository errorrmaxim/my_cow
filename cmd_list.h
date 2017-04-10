#ifndef CMD_LIST_H
#define CMD_LIST_H


#include <sstream>
#include <cstring>
#include <string.h>
#include <vector>
#include <unordered_map>
#include <recorder.h>




class cmd_list
{
private:
    int cmd_id;
    std::unordered_map<std::string, int> massage_list;
    cmd_list();
    cmd_list(const cmd_list&) = delete;
    cmd_list& operator = (const cmd_list&) = delete;
    recorder rc1;
   public:
    static cmd_list &Get_cmd_list();

    void add_commands(std::string&);
    void show_command_list();
    std::unordered_map<std::string, int> get_command_list();
    void create_base_cmd();

};

#endif // CMD_LIST_H
