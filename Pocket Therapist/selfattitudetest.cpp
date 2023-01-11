#include <iostream>
#include <string>

void startSelfAtt(){
    double scoretotal = 0.0; //since this is rushed so ill just make this and kicked the bucket down the road to become headace
    double s1=1.0;          // basically, this is hard coded and do not use any classes or anything just plain scripting #lua
    double s2=2.0;
    double s3=3.0;
    double s4=4.0;
    double ss1=0.1;
    double ss2=0.2;
    double ss3=0.3;
    double ss4=0.4;
    double new1=0.0;
    double new2=0.0;
    std::string spacess = R"( | )";
    std::cout << "Currently does nothing" <<  std::endl;    
    printf("\x1B[34mTexting\033[0m\t\t\n");
    std::cout << s1 << spacess << s2 << spacess << s3 << spacess << s4 << spacess << ss1 << spacess << ss2 << spacess << ss3 << spacess << ss4 << spacess << scoretotal << std::endl;
    
    char choice1; //idk man if this going to cloug the memory more but as stated. kicked the bucket down the road 
    char choice2;
    
    bool inchoice1 = true;
    bool inchoice2 = true;
    while (inchoice1 != false){
        std::cin >> choice1;
        switch(choice1) //doing this 2 times.
        {
            case '1':
                new1 = scoretotal + s1;
                inchoice1 = false;
            break;
            case '2':
                new1 = scoretotal + s2;
                inchoice1 = false;
            break;
            case '3':
                new1 = scoretotal + s3;
                inchoice1 = false;
            break;
            case '4':
                new1 = scoretotal + s4;
                inchoice1 = false;
            break;
            default:
                std::cout << "Not a Valid Choice. \n";
                std::cout << "Choose again.\n";
            break;
            }
        }
    std::cout << new1 <<std::endl;
    while (inchoice2 != false){
        std::cin >> choice2;
        switch(choice2) //doing this 2 times.
        {
            case '1':
                new2 = new1 + ss1;
                inchoice2 = false;
            break;
            case '2':
                new2 = new1 + ss2;
                inchoice2 = false;
            break;
            case '3':
                new2 = new1 + ss3;
                inchoice2 = false;
            break;
            case '4':
                new2 = new1 + ss4;
                inchoice2 = false;
            break;
            default:
                std::cout << "Not a Valid Choice. \n";
                std::cout << "Choose again.\n";
            break;
        }
    }
    std::cout << new2 <<std::endl;
    
    std::system("PAUSE");
}

int selfAttMenu()
{
char choice;
bool selfattMenu = true;
while (selfattMenu != false){
std::system("cls");
std::cout << R"(
  ______             __   ______       ______     __        __      __    __                      __           
 /      \           |  \ /      \     /      \   |  \      |  \    |  \  |  \                    |  \          
|  $$$$$$\  ______  | $$|  $$$$$$\   |  $$$$$$\ _| $$_    _| $$_    \$$ _| $$_    __    __   ____| $$  ______  
| $$___\$$ /      \ | $$| $$_  \$$   | $$__| $$|   $$ \  |   $$ \  |  \|   $$ \  |  \  |  \ /      $$ /      \ 
 \$$    \ |  $$$$$$\| $$| $$ \       | $$    $$ \$$$$$$   \$$$$$$  | $$ \$$$$$$  | $$  | $$|  $$$$$$$|  $$$$$$\
 _\$$$$$$\| $$    $$| $$| $$$$       | $$$$$$$$  | $$ __   | $$ __ | $$  | $$ __ | $$  | $$| $$  | $$| $$    $$
|  \__| $$| $$$$$$$$| $$| $$         | $$  | $$  | $$|  \  | $$|  \| $$  | $$|  \| $$__/ $$| $$__| $$| $$$$$$$$
 \$$    $$ \$$     \| $$| $$         | $$  | $$   \$$  $$   \$$  $$| $$   \$$  $$ \$$    $$ \$$    $$ \$$     \
  \$$$$$$   \$$$$$$$ \$$ \$$          \$$   \$$    \$$$$     \$$$$  \$$    \$$$$   \$$$$$$   \$$$$$$$  \$$$$$$$
                          ______                                    
                         /      \                                   
                        |  $$$$$$\  ______    ______   ______ ____  
                        | $$_  \$$ /      \  /      \ |      \    \ 
                        | $$ \    |  $$$$$$\|  $$$$$$\| $$$$$$\$$$$\
                        | $$$$    | $$  | $$| $$   \$$| $$ | $$ | $$
                        | $$      | $$__/ $$| $$      | $$ | $$ | $$
                        | $$       \$$    $$| $$      | $$ | $$ | $$
                         \$$        \$$$$$$  \$$       \$$  \$$  \$$
)" << '\n';
std::cout << "/\\ What would you like to do /\\\n";
std::cout << " 1 - self attitude form.\n";
std::cout << " 2 - Return.\n";
std::cout << " 3 - View last form you signed*.\n";
std::cout << "\n";
std::cout << " *non functional option\n";
std::cout << " Enter your choice and press return: ";

std::cin >> choice;

    switch (choice)
    {
    case '1':
    case 'S':
    case 's':
        std::cout << "\nselfatt start\n";
        startSelfAtt();
// rest of code here
    break;
    case '2':
        std::cout << "End of Program.\n";
        
        selfattMenu = false;
    break;
    default:
//        std::system("cls");
        std::cout << "Not a Valid Choice. \n";
        std::cout << "Choose again.\n";
    break;
    }

    }
return 0;
}

int main(){
    selfAttMenu();
}