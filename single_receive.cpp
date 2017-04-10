#include "single_receive.h"

single_receive::single_receive(char* _massage): m_massage(_massage), m_cmd_id(0)
{

            m_massage_list = cmd_list::Get_cmd_list().get_command_list();

            auto answ_msg = m_massage_list.find(m_massage);


            if(answ_msg != m_massage_list.end())
                m_cmd_id = *answ_msg->second;
            else
                m_cmd_id = -1;


}

std::string single_receive::ret_answer()
{
    if(m_cmd_id != -1)
    {
        //exec_module->set_module(m_cmd_id);
        std::cout << m_massage << std::endl;
        return m_massage;
    }
    else
    {
        exec_module->set_module(m_cmd_id);
        exec_module->module_start(m_massage);
        std::cout << m_massage << std::endl;
        return std::string("Module " + m_massage + " is starting...\n");
    }
}
