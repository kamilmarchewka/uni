#include <iostream>
#include <cmath>
using namespace std;

class Question
{
public:
    Question(string TEXT = "", string ANSWER = "") : text(TEXT), answer(ANSWER) {}

    void setText(string TEXT) { text = TEXT; }
    void setAnswer(string ANSWER) { answer = ANSWER; }
    bool checkAnswer(string RESPONSE) const { return (RESPONSE == answer) ? true : false; }
    void display() const { cout << "Pytanie: " << text << endl; }

protected:
    string text, answer;
};

class ChoiseQuestion : public Question
{
public:
    ChoiseQuestion(string TEXT = "") { text = TEXT; };

    void addChoice(string ANSWER, bool CORRECT)
    {
        choices.push_back(ANSWER);
        if (CORRECT)
            answer = ANSWER;
    }
    void display() const
    {
        Question::display();
        for (string ch : choices)
            cout << ch << endl;
    }

private:
    vector<string> choices;
};

int main()
{
    string answer;
    Question q1;

    q1.setText("Ile to jest 2 + 2?");
    q1.setAnswer("4");
    q1.display();
    cin >> answer;
    cout << "Twoja odpowiedz jest: " << q1.checkAnswer(answer) << endl;

    ChoiseQuestion pytanieWyboru;
    pytanieWyboru.setText("Ile to jest 2 + 2?");
    pytanieWyboru.addChoice("2", false);
    pytanieWyboru.addChoice("4", false);
    pytanieWyboru.addChoice("5", false);
    pytanieWyboru.addChoice("8", false);
    pytanieWyboru.display();
    cin >> answer;
    cout << "Twoja odpowiedz jest: " << q1.checkAnswer(answer) << endl;

    return 0;
}