#include "exec.h"


void exec::set_module(int _mod)
{
    if(_mod > 0)
      m_module = _mod;
    else
        std::cout << m_module << std::endl;
      perror("Error of module set..\n");

}

void exec::module_start(std::string msg)
{
        std::unordered_map<std::string, int>smtx = cmd_list::Get_cmd_list().get_command_list();

        finder mod(std::string msg);
}
