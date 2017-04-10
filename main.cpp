


#include <calcul.h>
#include <single_receive.h>


using namespace std;

string COW_Create(string word)
{

    string say = word;
    string return_COW;
    if(say == "")
    {
        say = "MOO";
    }
    int word_size = say.length();
    int range = 0;
    return_COW.push_back(' ');
   for(int i = 0; i < word_size + (word_size / 2); ++i)
   {
       return_COW.push_back('=');
   }
   return_COW.push_back('\n');
   return_COW += "||";
for(int i = 0; i < word_size /5 ; i++)
{
    return_COW.push_back(' ');
}
return_COW += say;
for(int i = 0; i < word_size /5 ; i++)
{
    return_COW.push_back(' ');
}
return_COW += "||";
return_COW.push_back('\n');
return_COW.push_back(' ');

for(int i = 0; i < word_size + (word_size / 2); ++i)
{
    return_COW.push_back('=');
    range++;
}
return_COW.push_back('\n');
for(int i = 0; i < range; i++)
{
    return_COW.push_back(' ');
}
return_COW += "\\\\  ^__^\n";
for(int i = 0; i < range+1; i++)
{
    return_COW.push_back(' ');
}
return_COW += "\\\\ (oo)\\_______\n";
for(int i = 0; i < range; i++)
{
    return_COW.push_back(' ');
}
return_COW += "    (__)\\       }/\\/\n";

for(int i = 0; i < range; i++)
{
    return_COW.push_back(' ');
}
return_COW += "        ||----W||\n";

for(int i = 0; i < range; i++)
{
    return_COW.push_back(' ');
}
return_COW += "        ||     ||";

return return_COW;
}

double computing(double &a, double &b, char &sign)
{
    double res;
    calcul COW_culc(a,b);

    switch (sign) {
    case '+':res = COW_culc.sum(); break;
    case '-':res = COW_culc.dif(); break;
    case 'x':res = COW_culc.mult(); break;
    case '/':res = COW_culc.div(); break;
    }
    return res;
}



int main(int c, char *v[])
{
    double a, b, res;
    char sign;


    if(c < 2)
    {
        system("clear");
        printf("%s\n", COW_Create("MMOOOOO...").c_str());


    }
    if(c == 2)
    {
        system("clear");
        single_receive execute_massage(v[1]);
        std::cout << v[1] << std::endl;
        execute_massage.ret_answer();

    }

    if(c == 4)
    {

        system("clear");
        a = stod(v[1]);
        sign = (char)*v[2];
        b = stod(v[3]);
        res = computing(a,b,sign);

         string answer = string(v[1]) + ' ' + string(v[2]) + ' ' + string(v[3]) + " = " + to_string(res);
         printf("%s\n", COW_Create(answer).c_str());
         printf("\n\n\n");

    }




return 0;
}
///MyQtProj/build-cow_lol-Desktop_Qt_5_7_0_GCC_64bit-Debug$
