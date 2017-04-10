#ifndef EXEC_H
#define EXEC_H

#include <modules.h>
#include <memory>
#include <cmd_list.h>





class exec
{
    int m_module;

public:
    //exec(){}
    void set_module(int );
    void module_start(std::string str);

};

#endif // EXEC_H
