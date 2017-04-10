#include "recorder.h"

    recorder::recorder():r_path("key_word.txt")
    {
        std::ofstream cmd_file;
        m_buff.insert("weather");
        m_buff.insert("vk");
        m_buff.insert("run_qt");
        m_buff.insert("youtube");

        std::string tmp;
        try
        {
            cmd_file.open(r_path.c_str());
        }catch(...)
        {
            std::cout << "error..\n" << std::endl;
        }

     for(auto entry : m_buff)
     {
         tmp = entry+' ';
         cmd_file.write(tmp.c_str(), tmp.size());
     }
        cmd_file.close();
    }

    std::set<std::string> recorder::ret_set()
    {
            std::string cmd;
            std::set<std::string> tmp_set;
            std::ifstream checking_file;//path to file for deleting words;
            try
            {
                checking_file.open("key_word.txt");
            }catch(...)
            {
                std::cout << "Error.." << std::endl;
            }

            while (checking_file >> cmd)
            {
               tmp_set.insert(cmd);
            }
            return tmp_set;
    }

    recorder::~recorder()
    {


    }
