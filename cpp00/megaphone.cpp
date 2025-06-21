#include <iostream>

#define DEFAULT "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

void print_upper(char *str) {
    int i = 0;
    while (str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }
    std::cout << str;
}

int main(int ac, char **av) {

    if (ac == 1)
        std::cout << DEFAULT << std::endl;
    else {
        for (int i = 1; i < ac; i++)
        {    
            print_upper(av[i]);
            if (i + 1 == ac)
                 std::cout << " ";
        }
    }

    return 0;
}