#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

using namespace std;

int diary() {

/**********************************************************
    
    All the strings display are listed here
    
***********************************************************/ 
    
    string narrator {"Mr.Comical : "};
//    string userName {};
    string prefer {"\nYour Preference : "};
    string res {"Your Respond : "};
    string error {"Sorry, your selection is invalid. Please re-enter your choice."};
    string instruction {"\n(Please type in the number without Full Stop and Parenthesis. Please do not enter a letter as it may crash the program)"};
    string endline {"\n==========================\n=========================="};
    
/*    cout << "Please enter your name: ";
    cin >> userName;
    system("clear");*/
    
    cout << "\nIt is a pleasure to meet you, " << userName << "!" << endl; //using identifier "name" here
    cout << "Allow me to introduce myself. I am " << narrator.substr (0,10) << endl; //display first ten letters of narrator variable.
    cout << "I'm always here to listen to your fascinating story!" << endl;
    cout << "Before we get started, be sure to clear up your mind\nand you are in the perfect position to write the diary." << endl;
    
    int first_reaction_choice{};                                                                                            //int and string for First Question respond
    string first_respond{};
    string pre_second {"\n\nMr.Comical : Shall we proceed to the next one? Here it is!"};    
    
    int second_reaction_choice{};                                                                                           //int and string for Second Question respond
    string second_respond{};
    string pre_third {"\nMr.comical : Hope you always have an appetizing day! Let's proceed to the next one!"};
    
    int third_reaction_choice {};                                                                                           //int and string for Third Question respond
    string third_respond {};
    string pre_fourth {"\nMr.Comical : Another day, another passion! Keep on obeserving what you are interested, okay?"};
    
    int fourth_reaction_choice {};                                                                                          //int and string for Fourth Question respond
    string fourth_respond {};
    string pre_fifth {"\nWhat a gripping topic! Sounds fun, I would like to be there with you!"};
    
    int fifth_reaction_choice {};                                                                                           //int and string for Fifth Question respond
    string fifth_respond {};
    string goodbye {" I hope I can be your assistance next time! Have a nice day!"};
    
    
    char confirm{};     //Confirmation to continue using the diary menu.
    do {
        cout << "\nAre you ready to take a note of your magnificent day (Y/N)?: "; //Using Do-While Loop in case user typed in invalid selection.
        cin >> confirm;                                                            //The do 
            if (confirm == 'Y' || confirm == 'y') {
                cout << endline << endl;
                cout << "\nHere is the first question." << endl;
                cout << "\nFor today, which emotion would best describe your day?" << endl;      //First Question
                cout << instruction << endl; 
                
                do {    
                    cout << "1.) Great!\n2.) Wonderful!\n3.) Indifferent\n4.) Awful\n" << prefer; //First Question's Choices
                    cin >> first_reaction_choice;
                        switch (first_reaction_choice) {                                          // Switch Case : For first_reaction_choice selection, if out of bound, then display error.
                            case(1):
                                cout << "\n" << narrator << "I'm thankful that it was your great day! Do you mind if your add more about it?\n" << endl;
                                break;
                            case(2):
                                cout << "\n" << narrator << "Marvelous! I bet you did something wonderful too! Please, I want to listen about your day!\n" << endl;
                                break;
                            case(3):
                                cout << "\n" << narrator << "Hmm, may you add a description for that please?\n" << endl;
                                break;
                            case(4):
                                cout << "\n" << narrator << "I feel sad for that. May you add more detail for that as I may be able to comfort you?\n" << endl;
                                break;
                            default:
                                cout << "\n" << narrator << error << "\n" << endl;
                    }
                } while (first_reaction_choice > 4 || first_reaction_choice < 1);
               
               {
                   cout << res;
                    cin >> first_respond;                                                       //User can type in the addition for the desired reaction
                        if (first_reaction_choice == 1) {
                            cout << "\n" << narrator << "Wow! I can feel your happiness from what you have told me!" << pre_second << endl; //If-else statement, checking what user have reacted recently to display continuously respond.
                        }
                        else if (first_reaction_choice == 2) {
                            cout << "\n" << narrator << "I am delighted that it was your wonderful day!" << pre_second << endl;
                        }
                        else if (first_reaction_choice == 3) {
                            cout << "\n" << narrator << "I hope your upcoming day will be wonderful for you!" << pre_second << endl;
                        }
                        else if (first_reaction_choice == 4) {
                            cout << "\n" << narrator << "Please don't worry about it. You are great that you have passed the day!\nI wish you the best at every moment of your upcoming days!" << pre_second << endl;   
                        }
            }

                       
                cout << endline << endl;
                cout << "\n\n" << narrator << "The second question!\nHow do you find your food today?" << endl; //Second Question
                cout << instruction << endl;
                do {                                                                                        //Do-while loop : In case users typed in invalid selection.
                    cout << "1.) Scrumptious!\n2.) Average\n3.) Horrible\n4.)I skip the meal.\n" << prefer; //Display second question choices
                    cin >> second_reaction_choice;                                                          //User select the reaction
                        switch (second_reaction_choice) {                                                   //Switch case : For second_reaction_choice selection, if out of bound, then display error.
                            case(1):
                                cout << "\n" << narrator << "It must have been a really amazing meal! What do you have?\n" << endl;
                                break;
                            case(2):
                                cout << "\n" << narrator << "Great! What do you hvae by the way?\n" << endl;
                                break;
                            case(3):
                                cout << "\n" << narrator << "Oh I'm sorry to hear that. What do you have and why is it bad though?\n" << endl;
                                break;
                            case(4):
                                cout << "\n" << narrator << "Oh no, you shouldn't skip the meal. Is there no meal that apetizes you at all?\n" << endl;
                                break;
                            default:
                                cout << error << endl;
                        }
                } while (second_reaction_choice > 4 || first_reaction_choice < 1);
                
                cout << res;
                cin >> second_respond;                                                                          //User can add definition to what reaction they selected
                if (second_reaction_choice == 1 || second_reaction_choice == 2 || second_reaction_choice == 3)  //If-else statement : Checking recent second_reaction_choice for the continously display of respond.
                    cout << "\n" << pre_third << endl;
                else
                    cout << "\n" << narrator << "Maybe you should try cooking by yourself! It's kinda fun! I hope you feel more apetizes next time!" << endl; //These are the responds
                    cout << endline << endl;
                    cout << "\n" << narrator << "Since you are one of the observants! Did you find anything interesting today?\n"; //Third Question
                    cout << instruction;


              {
                 do {                                                                                   //do-while loop : In case users typed in invalid selection
                    cout << "\n1.)Yes!\n2.)No!";                                                        //Third question choices
                    cout << "\n" << prefer;
                    cin >> third_reaction_choice;                                                       //User selection
                        switch (third_reaction_choice) {                                                //Switch Case : checking users' selection to display continuously respond.
                            case(1):
                                cout << "\n" << narrator << "And what are they? I'm all ears!\n" <<  endl;
                                break;
                            case(2):
                                cout << "\n" << narrator << "Oh, I didn't expect that. But tomorrow is going to be interesting eh?\n" << endl;
                                break;
                            default:
                                cout << "\n" << error << prefer;
                        }
                 } while (third_reaction_choice != '1' || third_reaction_choice != '2');
                cout << res;
                cin >> third_respond;                                                                   //User can add definition to what they have selected.
                cout << pre_fourth << endl;                                                             //Display linking respond (Whther they selected yes/no, it display the same sentence because it was neutral.)
              } 
              
              { 
            cout << endline << endl;
            cout << "\n" << narrator << "By the way, I hope you have a great conversation with friends today, haven't you?" << endl;        //Fourth Question
            cout << instruction << endl;
            
                do {                                                                                                                        //do-while loop : in case user typed in invalid selection
                    cout << "1.) Yes!\n2.) No!";                                                                                            //Fourth Question choices
                    cout << "\n" << prefer;
                    cin >> fourth_reaction_choice;                                                                                          //User Selection
                        switch (fourth_reaction_choice) {                                                                                   //Switch case : checking users' selection to display continously respond.
                            case(1):
                                cout << "\n" << narrator << "Cool! Is it in an interesting topic, what is it?\n"<< endl;
                                break;
                            case(2):
                                cout << "\n" << narrator << "Well then, what will be the topic you would like to talk?\n"<< endl;
                                break;
                            default:
                                cout << "\n" << error << prefer;
                        }
                } while (fourth_reaction_choice != '1' || fourth_reaction_choice != '2');                                                                                       //Selection greater than 2 consider as invalid.
            cout << res;
            cin >> fourth_respond;                                                                                                          //User can add definition to what they have reacted from fourth_reaction_choice.
            cout << pre_fifth << endl;
              }
              
          {
            cout << endline << endl;
            cout << "\n" << narrator << "Before we end today's conversation, do you have anything in your mind you want to express toward someone?" << endl;   //Fifth Question
            cout << instruction << endl;
            do {                                                                                                                                               //do-while loop : in case user typed in invalid selection
                cout << "1.) Yes!\n2.) No!\n" << prefer;                                                                                                       //Fifth question choices
                cin >> fifth_reaction_choice;
                    switch (fifth_reaction_choice) {                                                                                                            //Switch case : checking users' selection to display continously respond.
                        case(1):
                            cout << "\n" << narrator << "Please feel free to practise with me\n"<< endl;
                            break;
                        case(2):
                            cout << "\n" << narrator << "Oh, how about you tell what's on your mind now?\n"<< endl;
                            break;
                        default:
                            cout << error << prefer;
                    }
            } while (fifth_reaction_choice != '1' || fifth_reaction_choice != '2');                                                                                                                // selection greater than 2 consider as invalid.
            cout << res;
            cin >> fifth_respond;
            cout << "\n\n" << narrator << "I am very thankful to plead you today!";
            cout << goodbye << endl;
          }
                



}
            else if (confirm == 'N' || confirm == 'n') { //From Line 57 Do-while loop + Switch case, if user type in N or n, program shall exit
                cout << "\n" << narrator << "Please come back later when you feel like it!" << endl; //Should return to the main menu
            }
            else {
                cout << "\nSorry, invalid selection. Please re-enter your confirmation.\n"; //Let the user re-enter the confirmation again.
            }
    } while (confirm != 'Y' && confirm != 'y' && confirm != 'N' && confirm != 'n');


    cout << endl;
    return 0; 
}
    





