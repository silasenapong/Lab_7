#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Fahsai: Sawadee ka...Can you tell me your name?" << std::endl
              << "?????: ";
    std::getline(std::cin, name);

    std::cout << "Fahsai: Wow!!! " << name << " is a really cool name." << std::endl;

    int s_id;
    std::cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << std::endl;
    std::cout << name << ": ";
    std::cin >> s_id;
    std::cin.ignore();

    int gear = (s_id / 10000000) - 12;

    std::cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you." << std::endl
              << "Fahsai: Let's go to the cinema together!!!" << std::endl
              << "Fahsai: What movie do you want to watch? " << std::endl;

    std::string movie;
    std::cout << name << ": ";
    std::getline(std::cin, movie);

    std::string date;
    std::cout << "Fahsai: So....which day are you free to go with me?" << std::endl
              << name << ": ";
    std::getline(std::cin, date);

    std::cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching "
              << movie << " with you." << std::endl;

    std::string word;
    std::cout << name << ": ";
    std::getline(std::cin, word);

    std::cout << "Fahsai: 555+ see you " << date << ". Bye Bye \\(^ ^)/";

    return 0;
}
