#include <iostream>
#include <string>
#include "arts.cpp"

using namespace std;

/*int Guess;*/
double Total2;
//int Guess; // codelite has problems with not redefining in every file.....

//Question Class
class Question2{
private:
        string Question2_Text;
        string Answer_1;
        string Answer_2;
        string Answer_3;
        string Answer_4;
        int Score;
        double ScoreGiven;
        int Score2;
        double ScoreGiven2;
        int Score3;
        double ScoreGiven3;
        int Score4;
        double ScoreGiven4;
public:
    // Setter Function
    void setValues(string, string, string, string, string, int, double, int, double, int, double, int, double);

        //Function to ask questions
        void askQuestion2();
        
};


// Driver Code
int selfAtt2()
{
	cout <<"      Self Attitude form\n";
    cout <<"\n     Press Enter to start \n";
    
    //input
    cin.get();
    
    string Respond;
    cout << "Are you ready to take the quiz? (yes/no)" << endl;
    cin >> Respond;
    
    if (Respond == "yes"|| Respond == "YES" || Respond == "yES" || Respond == "YEs" || Respond == "yEs" || Respond == "Yes" || Respond == "yeS" || Respond == "YeS"){
            system("cls");
            cout << endl;
            cout << "LET'S START\n";
            
    }
    else if (Respond == "no" || Respond == "NO" || Respond == "No" || Respond == "nO"){
            cout << endl;
            cout << "Hope you come back\n";
            return 0;
    }
    else {
        cout << "Invalid Choice\n";
        return selfAtt2();
    }
    
    //Objects of Question Class
    Question2 q1;
    Question2 q2;

    //start doing question
    
    q1.setValues("Question : Suppose you close your eyes, at what place would you like to be when you open your eyes back? ", "1. Forest", "2. Beach", "3. On top of the hill", "4. Flatland", 1, 1, 2, 2, 3, 3, 4, 4);
    q2.setValues("Question : According to your first response, at what time is it in your mind? ", "1. Sunrise", "2. Sunset", "3. Full Moon night", "4. New Moon night", 1, 0.1, 2, 0.2, 3, 0.3, 4, 0.4);
   
    q1.askQuestion2();
    q2.askQuestion2();
   
    //Display the Total2 score
    cout << "\nResult = "<< Total2 << "." << endl;
    
    //Display the result
    
    //If the user get score equal to 1.1
    if ( Total2 == 1.1) {
        a1d1();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 1.2
    } else if ( Total2 == 1.2){
        a1d2();
        system("PAUSE");
        Total2 = 0;
    //If the user get score equal to 1.3
    } else if ( Total2 == 1.3){
        a1d3();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 1.4
    } else if ( Total2 == 1.4){
        a1d4();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 2.1
    } else if ( Total2 == 2.1){
        a2d1();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 2.2
    } else if ( Total2 == 2.2){
        a2d2();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 2.3
    } else if ( Total2 == 2.3){
        a2d3();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 2.4
    } else if ( Total2 == 2.4){
        a2d4();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 3.1
    } else if ( Total2 == 3.1){
        a3d1();        
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 3.2
    } else if ( Total2 == 3.2){
        a3d2();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 3.3
    } else if ( Total2 == 3.3){
        a3d3();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 3.4
    } else if ( Total2 == 3.4){
        a3d4();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 4.1
    } else if ( Total2 == 4.1){
        a4d1();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 4.2
    } else if ( Total2 == 4.2){
        a4d2();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 4.3
    } else if ( Total2 == 4.3){
        a4d3();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    //If the user get score equal to 4.4
    } else if ( Total2 == 4.4){
        a4d4();
        system("PAUSE");
        system("cls");
        Total2 = 0;
    return 0;
    } else {
        cout << "How did this happen\nResetting Total2";
        Total2 = 0;
    }
}
// Function to set the value of the question
void Question2::setValues(
        string q, string a1,
        string a2, string a3, string a4, int Sc, 
        double Sc_G, int Sc2, double Sc_G2, int Sc3, double Sc_G3, int Sc4, double Sc_G4)
{
    Question2_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Score = Sc;
    ScoreGiven = Sc_G;
    Score2 = Sc2;
    ScoreGiven2 = Sc_G2;
    Score3 = Sc3;
    ScoreGiven3 = Sc_G3;
    Score4 = Sc4;
    ScoreGiven4 = Sc_G4;
}

// Function to ask questions
void Question2::askQuestion2()
    {
    cout << endl;
    
    // Print the Questions
    cout << Question2_Text << endl;
    cout << Answer_1 << endl;
    cout << Answer_2 << endl;
    cout << Answer_3 << endl;
    cout << Answer_4 << endl;
    cout << endl;
    
    // Display the answer
    cout << "What is your answer?(in number)" << endl;
    cin >> Guess;
    
    //Answer
    if (Guess == Score){
        cout << endl;
        cout << "Next!" << endl;
    
  
        //Update the score
        Total2 = Total2 + ScoreGiven;
        
    }else if (Guess == Score2){
        cout << endl;
        cout << "Next!" << endl;
        
        
        //Update the score
        Total2 = Total2 + ScoreGiven2;
        
    }else if (Guess == Score3){
        cout << endl;
        cout << "Next!" << endl;
        
        
        //Update the score 
        Total2 = Total2 + ScoreGiven3;
    
    }else if (Guess == Score4){    
        cout << endl;
        cout << "Next!" << endl;
        
        
        //Update the score 
        Total2 = Total2 + ScoreGiven4;
    }
    
    //Otherwise
    else  {
            cout << endl;
            cout << "Invalid Answer" << endl;
            cout << "Please Answer Again" << endl;
            
            return askQuestion2();
    }
}