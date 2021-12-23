#include <iostream>
#include <cstring>
#include <string.h>

int main()
{
    char    *str = new char[100];
    int     i = 0;
    char    *tmp = str;
    char    *ptr;

    std::cin.get(str, 100);
    while (i != 2)
    {
        std::cout << (strtok_r(str, " ", &ptr))[0] << ". ";
        str = nullptr;
        i++;
    }
    std::cout << strtok_r(str, " ", &ptr);
    delete (tmp);
    return (0);
}

/*#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    char   str[100];     // = "Sidorov Ivan Petrovich";
    char * p = str;
 
    cout << "Введите фамилию, имя и отчество:\n";
 
    cin.getline(str, 100);
 
    while( *p != ' ' ) 
       p++;
    cout << *++p << '.';
 
    while( *p != ' ' )
        p++;
    cout << *++p << ". ";
 
    p = str;
    while( *p != ' ' )
        cout << *p++;
    cout << endl;
 
    return 0;
}
*/
