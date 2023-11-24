#include <cstdlib>
#include <iostream>
#include <string>

class CLI
{
private:
    /* data */
public:
    void CMDrunner();
    ~CLI();
};





void CMDrunner() {
    while (true) {
        std::string command;
        std::string name;
        
        std::cout << "What do you want pookie? ";

        std::getline(std::cin, command);

        if (command == "exit") {
            break;
        } else if (command == "create vite project" || command == "vite") {
            std::string projectName;
            std::cout << "Enter project name: ";
            std::getline(std::cin, projectName);

            std::string fullCommand = "npm create vite@latest " + projectName;
            system(fullCommand.c_str());
        } else if (command == "start vite") {
            system("npm run dev");
        } else if (command == "create next project") {
            std::string projectName;
            std::cout << "Enter project name: ";
            std::getline(std::cin, projectName);

            std::string fullCommand = "npx create-next-app " + projectName;
            system(fullCommand.c_str());
        } else if (command == "start next") {
            system("npm run dev");
        } else if (command == "create astro project" || command == "astro") {
            std::string projectName;
            std::cout << "Enter project name: ";
            std::getline(std::cin, projectName);

            std::string fullCommand = "npx create-astro " + projectName;
            system(fullCommand.c_str());
        } else if (command == "start astro") {
            system("npm run dev");
        } else if (command == "create custom project" || command == "custom") {
            std::string projectName;
            std::cout << "Enter project name: ";
            std::getline(std::cin, projectName);

            // Replace the command below with your custom build tool command
            std::string fullCommand = "custom-build-tool " + projectName;
            system(fullCommand.c_str());
        } else {
            std::cout << "Unknown command: " << command << std::endl;
        }
    }
}

int main() {
    CMDrunner();
    return 0;
}

