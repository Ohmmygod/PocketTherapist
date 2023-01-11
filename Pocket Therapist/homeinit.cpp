#include <iostream>
#include <string>
#include <time.h>
#include <fstream> 

std::string userName;


void writeNameToDisk(){
    //This is for write and check if the file existed already before creating, can't find better way than this other than creating a phraser and i only have 3 day deadline
    std::ifstream nameFile("name");
    
    if(nameFile.is_open())
    {}else{std::ofstream nameFileCr("name"); nameFileCr << userName; nameFileCr.close();}
};

void speech_greet(){
  // set random seed based on unix time, take compute time but it reduce time to think of seeding system
  srand (time(NULL));
  std::string arrayNum[5] = {"1 Greeting.", "2 Welcome.", "3 How\'s it going", "4 Hope you\'re doing great", "5 Howdy"};
  int RanIndex = rand() % 5; // random from 1-5
  writeNameToDisk();
  std::cout << arrayNum[RanIndex] << ' ' << userName << std::endl;
  //this get called EVERYTIME the user went to home menu so it will probably be sloooooow
}

int homeStart(){
    std::ifstream nameFile("name");
    if (nameFile.is_open())
    {
    std::getline(nameFile, userName);}
    else{
    std::cout << "Enter your username: ";
    std::getline (std::cin, userName);
    if(userName == "" || userName == " "){userName = "No name";};
    std::cout << "Your name is: " << userName << '\n' << "This will be saved in the same excuteable\'s directory\n";
    }
    speech_greet();
    return 0;
}
