/*
 * 
 * HOW TO BUILD
 * 1) Copy entire zip folder to a directory
 * 2) open terminal/cmd on the directory
 * 3) g++ main.cpp
 * 4) ????
 * 5) profit
 * 
 * WARNING!
 * Since C++ doesn't really support clearing and interacting with the console this will be windows only. If you want to try this out
 * on other system, please Ctrl-H and replace all cls with clear as well as commenting all system("PAUSE")
 * 
 */
 
#include <iostream>
#include <fstream> 
#include "depressiontest.cpp"
#include "homeinit.cpp"
//#include "selfattitudetest.cpp"
#include "selfatttestjjv.cpp"
#include "diary.main_1.cpp"
#include "AtLaunch.main_1.cpp"

std::ifstream nameFile("name");


void printTest(){
    std::cout << 
R"(
 _______    ____      __       __  __                    __      __                 __      __                    __       ____  
|       \  /    \    |  \  _  |  \|  \                  |  \    |  \               |  \    |  \                  |  \     /    \ 
| $$$$$$$ |  $$$$\   | $$ / \ | $$| $$____    ______   _| $$_   | $$  _______     _| $$_   | $$____    ______   _| $$_   |  $$$$\
| $$____   \$$| $$   | $$/  $\| $$| $$    \  |      \ |   $$ \   \$  /       \   |   $$ \  | $$    \  |      \ |   $$ \   \$$| $$
| $$    \    /  $$   | $$  $$$\ $$| $$$$$$$\  \$$$$$$\ \$$$$$$      |  $$$$$$$    \$$$$$$  | $$$$$$$\  \$$$$$$\ \$$$$$$     /  $$
 \$$$$$$$\  |  $$    | $$ $$\$$\$$| $$  | $$ /      $$  | $$ __      \$$    \      | $$ __ | $$  | $$ /      $$  | $$ __   |  $$ 
|  \__| $$   \$$     | $$$$  \$$$$| $$  | $$|  $$$$$$$  | $$|  \     _\$$$$$$\     | $$|  \| $$  | $$|  $$$$$$$  | $$|  \   \$$  
 \$$    $$  |  \     | $$$    \$$$| $$  | $$ \$$    $$   \$$  $$    |       $$      \$$  $$| $$  | $$ \$$    $$   \$$  $$  |  \  
  \$$$$$$    \$$      \$$      \$$ \$$   \$$  \$$$$$$$    \$$$$      \$$$$$$$        \$$$$  \$$   \$$  \$$$$$$$    \$$$$    \$$  
)" << std::endl;
} // I mean this is not needed but it will confuse whoever type 5, haha

int main()
{
char choice;
bool mainMenu = true;
std::system("cls");
/*      std::cout << R"(
   ___               _           _     _____  _                                _       _   
  / _ \  ___    ___ | | __  ___ | |_  /__   \| |__    ___  _ __   __ _  _ __  (_) ___ | |_ 
 / /_)/ / _ \  / __|| |/ / / _ \| __|   / /\/| '_ \  / _ \| '__| / _` || '_ \ | |/ __|| __|
/ ___/ | (_) || (__ |   < |  __/| |_   / /   | | | ||  __/| |   | (_| || |_) || |\__ \| |_ 
\/      \___/  \___||_|\_\ \___| \__|  \/    |_| |_| \___||_|    \__,_|| .__/ |_||___/ \__|
                                                                       |_|                 
)" << '\n';                                                                                 */
MainPrint();
while (mainMenu != false){
std::cout << R"(



)";
homeStart();
std::cout << "/\\ Main menu /\\\n";
std::cout << " 1 - Depression Test.\n";
std::cout << " 2 - Dairy.\n";
std::cout << " 3 - self attitude form.\n";
std::cout << " 4 - Exit.\n";
std::cout << "\n *non functional option" << '\n';
std::cout << " Enter your choice and press return: ";

std::cin >> choice;
    switch (choice)
    {
    case '1':
//    case 'S':
//    case 's':
        depressiontest();
    break;
    case '2':
        diary();
    break;
    case '3':
//    case 'V':
//    case 'v':

//        selfAttMenu();
        selfAtt2();
    break;
    case '4':
        std::cout << "End of Program.\n";
        nameFile.close();
        mainMenu = false;
        break;
    case '5':
    case 'H':
        printTest();
        break;
    default:
        std::cout << "Not a Valid Choice. \n";
        std::cout << "Choose again.\n";
    break;
    }

    }
return 0;
}
