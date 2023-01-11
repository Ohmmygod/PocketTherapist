#include <iostream>
#include <string>

using namespace std;

int Guess;
int Total;

//Question Class
class Question{
private:
        string Question_Text;
        string Answer_1;
        string Answer_2;
        string Answer_3;
        string Answer_4;
        int Score;
        int ScoreGiven;
        int Score2;
        int ScoreGiven2;
        int Score3;
        int ScoreGiven3;
        int Score4;
        int ScoreGiven4;
public:
    // Setter Function
    void setValues(string, string, string, string, string, int, int, int, int, int, int, int, int);

        //Function to ask selfatti
        void askQuestion();
        
};


// Driver Code
int depressiontest()
{
	cout <<"        Depression Test\n";
    cout <<"\n Press Enter to start the quiz\n";
    
    //input
    cin.get();
    
    string Respond;
    cout << "Are you ready to take the quiz? (yes/no)" << endl;
    cin >> Respond;
    
    if (Respond == "yes"|| Respond == "YES" || Respond == "yES" || Respond == "YEs" || Respond == "yEs" || Respond == "Yes" || Respond == "yeS" || Respond == "YeS"){
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
        
    }
    
    //Objects of Question Class
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;
   
    
    //start doing question
    
    q1.setValues("Question : Little interest or pleasure in doing things ", "1. Not At All", "2. Several Days", "3. More Than Half The Days", "4. Nearly Every day", 1, 0, 2, 1, 3, 2, 4, 3);
    q2.setValues("Question : Do you feeling down, depressed, or hopeless ", "1. Not At All", "2. Several Days", "3. More Than Half The Days", "4. Nearly Every day", 1, 0, 2, 1, 3, 2, 4, 3);
    q3.setValues("Question : Trouble falling or staying asleep, or sleeping too much ", "1. Not At All", "2. Several Days", "3. More Than Half The Days", "4. Nearly Every day", 1, 0, 2, 1, 3, 2, 4, 3);
    q4.setValues("Question : Feeling tired or having little energy ", "1. Not At All", "2. Several Days", "3. More Than Half The Days", "4. Nearly Every day", 1, 0, 2, 1, 3, 2, 4, 3);
    q5.setValues("Question : Poor appetite or overeating ", "1. Not At All", "2. Several Days", "3. More Than Half The Days", "4. Nearly Every day", 1, 0, 2, 1, 3, 2, 4, 3);
    q6.setValues("Question : Feeling bad about yourself - or that you are a failure or have let yourself or your family down ", "1. Not At All", "2. Several Days", "3. More Than Half The Days", "4. Nearly Every day", 1, 0, 2, 1, 3, 2, 4, 3);
    q7.setValues("Question : Trouble concentrating on things, such as reading the newspaper or watching television ", "1. Not At All", "2. Several Days", "3. More Than Half The Days", "4. Nearly Every day", 1, 0, 2, 1, 3, 2, 4, 3);
    q8.setValues("Question : Moving or speaking so slowly that other people could have noticed ", "1. Not At All", "2. Several Days", "3. More Than Half The Days", "4. Nearly Every day", 1, 0, 2, 1, 3, 2, 4, 3);
    q9.setValues("Question : Thoughts that you would be better off dead, or of hurting yourself ", "1. Not At All", "2. Several Days", "3. More Than Half The Days", "4. Nearly Every day", 1, 0, 2, 1, 3, 2, 4, 3);
    q10.setValues("Question : If you checked off any problems, how difficult have these problems made it for you at work, home, or with other people? ", "1. Not At All", "2. Several Days", "3. More Than Half The Days", "4. Nearly Every day", 1, 0, 2, 1, 3, 2, 4, 3);
   
   
    
    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
   
    
    //Display the total score
//    cout << "\nResult = "<< Total << "." << endl;
    
    //Display the result
    
    //If the user get more than or equal to 20
    if ( Total >= 20) {
        cout << "Severe depression\n";
        cout << "You should seek medical advice and/or counseling as soon as possible.\nRemember, this is not a substitute for medical advice. You should talk to your psychiatrist for clarification of any selfatti.\n";
    
    //If the user get more than or equal to 15
    } else if ( Total >= 15){
        cout << "Moderate to Severe Depression\n";
        cout << "You should closely watch out for any self-harming behavior or suicidal thoughts.\nIf you do happen to have them, we recommend seeking medical advice or counseling.\nThis is not a substitute for medical advice, and you should seek clarification of any selfatti with your psychiatrist.\n";
        
    //If the user get more than or equal to 10
    } else if ( Total >= 10){
        cout << "Probably Moderate Depression\n";
        cout << "You may want to consider and address any possible factors.\nKeep an eye on your symptoms for any further changes, and do let us know.\n";
        
    //If the user get more than or equal to 5
    } else if ( Total >= 5){
        cout << "Probably Mild Depression\n";
        cout << "Calmly wait to observe yourself for any changes, and let us know next time.\n";
        
    //If the user get less than or equal to 4
    } 
    else if ( Total >= 0){
        cout << "You likely don't have Depression\n";
        cout << "Keep yourself mentally healthy for your well-being.\n";
    
    return 0;
    }
}
// Function to set the value of the question
void Question::setValues(
        string q, string a1,
        string a2, string a3, string a4, int Sc, 
        int Sc_G, int Sc2, int Sc_G2, int Sc3, int Sc_G3, int Sc4, int Sc_G4)
{
    Question_Text = q;
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
void Question::askQuestion()

    {
    cout << endl;
    
    // Print the Questions
    cout << Question_Text << endl;
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
        Total = Total + ScoreGiven;
//        cout << "Your score right now : " << Total <<".\n";
        
    }else if (Guess == Score2){
        cout << endl;
        cout << "Next!" << endl;
        
        
        //Update the score
        Total = Total + ScoreGiven2;
//        cout << "Your score right now : " << Total <<".\n";
        
    }else if (Guess == Score3){
        cout << endl;
        cout << "Next!" << endl;
        
        
        //Update the score 
        Total = Total + ScoreGiven3;
//        cout << "Your score right now : " << Total <<".\n";
    
    }else if (Guess == Score4){    
        cout << endl;
        cout << "Next!" << endl;
        
        
        //Update the score 
        Total = Total + ScoreGiven4;
//        cout << "Your score right now : " << Total <<".\n";
    }
    
    //Otherwise
    else  {
            cout << endl;
            cout << "Invalid Answer" << endl;
            cout << "Please Answer Again" << endl;
            
            return askQuestion();
    }
}         // end of file