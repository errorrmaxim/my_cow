#include "cmd_list.h"

cmd_list::cmd_list():cmd_id(0)
{
    create_base_cmd();
}
cmd_list& cmd_list::Get_cmd_list()
{
    static cmd_list massage;
    return massage;
}

void cmd_list::add_commands(std::string& cmd)
{
    massage_list.insert(make_pair(cmd, ++cmd_id));
}

void cmd_list::show_command_list()
{
    for(auto entry : massage_list)
    {
        std::cout << "- " << entry.first << std::endl;
    }
}

std::unordered_map<std::string, int>cmd_list::get_command_list()
{
    return massage_list;
}

void cmd_list::create_base_cmd()
{
   std::set<std::string>tmp_set = rc1.ret_set();

   for(auto entry : tmp_set)
   {
       massage_list.insert(make_pair(entry, cmd_id));
       cmd_id++;
   }


}
