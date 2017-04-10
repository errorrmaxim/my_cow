#ifndef MODULES_H
#define MODULES_H
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>


#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <net/if.h>
#include <arpa/inet.h>
#include <iostream>
#include <QCoreApplication>
#include <QProcess>

enum web_list{vk = 4, weather = 3, youtube = 5};







struct mod1_ip
{
    private:
       std::string client_ip;
       int mod_id;
    public:
       mod1_ip():mod_id(1) { start(); status(); }


      void start()
        {

            int fd;
            struct ifreq ifr;

            fd = socket(AF_INET, SOCK_DGRAM, 0);

            ifr.ifr_addr.sa_family = AF_INET;
            strncpy(ifr.ifr_name, "eth0", IFNAMSIZ-1);
            ioctl(fd, SIOCGIFADDR, &ifr);
            close(fd);
            client_ip = inet_ntoa(((struct sockaddr_in *)&ifr.ifr_addr)->sin_addr);

        }

       std::string status()
       {
           std::cout << "IP ADDRES: " << client_ip << std::endl;
           return client_ip;
       }

};

struct mod2_pos
{
    void get_position()
    {
        std::cout << "WP" << std::endl;
    }
};

struct mod3_get_brow
{
private:
    std::string _url;
    unsigned int mod_id;
    unsigned int _link_id;

public:
     mod3_get_brow(std::string msg): _url(msg)
     {
         if(msg == "weather") _link_id = 3;
         if(msg == "vk") _link_id = 4;
         if(msg == "youtube") _link_id = 5;

         switch (_link_id) {
         case 3: _url = std::string("https://sinoptik.ua/");break;
         case 4: _url = std::string("https://vk.com/id50415846");break;
         case 5: _url = std::string("https://www.youtube.com/");break;

         }
     }


    void start(std::string )
    {

        QString url = QString::fromStdString(_url);
        QString path = "google-chrome --enable-plugins " + url;
        QProcess browser_proc;

        browser_proc.start(path);
    }


};

struct finder
{
    int val;
    finder(std::string msg)
    {

        if(msg == "get_ip") mod1_ip ex1;
        if(msg == "-position") mod2_pos ex2;
        else {
            mod3_get_brow ex3(msg);
        }


    }
};


#endif // MODULES_H
