#ifndef RECORDER_H
#define RECORDER_H
#include <set>
#include <fstream>
#include <iostream>

class recorder
{

    std::set<std::string>m_buff;
    std::string r_path;
public:
    recorder();
    std::set<std::string> ret_set();
    ~recorder();
};

#endif // RECORDER_H
