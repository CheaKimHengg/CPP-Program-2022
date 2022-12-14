#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
#define c cout                                                         // I'm lazy to type cout
#define e endl                                                         // I'm lazy to type endl
#define s SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), a) // It not pretty when it too long in code lol
string name1, name2, restart;
string turn = "X";
bool draw = false;
class ttt
{
private:
    string bg[4][4] = {{" 1", " 2", " 3", " 4"}, {" 5", " 6", " 7", " 8"}, {" 9", "10", "11", "12"}, {"13", "14", "15", "16"}}; // board's gap location
    int choice, row, column;

public:
    ttt()
    {
    }
    void display_bg();
    void player();
    bool winner();
};
void ttt::display_bg()  //Pheara
{ // tic-tac-toe board
    system("cls");
    // make text goes to middle
    COORD a;
    a.X = 61;
    a.Y = 0;
    s;
    c << "| |" << e;
    a.X = 61;
    a.Y = 1;
    s;
    c << "| |" << e;
    a.X = 61;
    a.Y = 2;
    s;
    c << "| |" << e;

    if (name1.length() == 1)
    {
        a.X = 34;
        a.Y = 1;
        s;
        c << name1 << ":Player[1] 'X'" << e;
    }
    else if (name1.length() == 2)
    {
        a.X = 32;
        a.Y = 1;
        s;
        c << name1 << ":Player[1] 'X'" << e;
    }
    else if (name1.length() == 3)
    {
        a.X = 31;
        a.Y = 1;
        s;
        c << name1 << ":Player[1] 'X'" << e;
    }
    else if (name1.length() == 4)
    {
        a.X = 30;
        a.Y = 1;
        s;
        c << name1 << ":Player[1] 'X'" << e;
    }
    else if (name1.length() == 5)
    {
        a.X = 29;
        a.Y = 1;
        s;
        c << name1 << ":Player[1] 'X'" << e;
    }
    else if (name1.length() == 6)
    {
        a.X = 28;
        a.Y = 1;
        s;
        c << name1 << ":Player[1] 'X'" << e;
    }
    else if (name1.length() == 7)
    {
        a.X = 27;
        a.Y = 1;
        s;
        c << name1 << ":Player[1] 'X'" << e;
    }
    else if (name1.length() == 8)
    {
        a.X = 26;
        a.Y = 1;
        s;
        c << name1 << ":Player[1] 'X'" << e;
    }
    else if (name1.length() == 9)
    {
        a.X = 25;
        a.Y = 1;
        s;
        c << name1 << ":Player[1] 'X'" << e;
    }
    else if (name1.length() == 10)
    {
        a.X = 24;
        a.Y = 1;
    }
    s;
    c << name1 << ":Player[1] 'X'" << e;

    a.X = 77;
    a.Y = 1;
    s;
    c << name2 << ":Player[2] 'O'" << e;

    // draw game board
    c << "\n\n\n";
    c << "\t\t\t\t\t\t ___________________________ " << e;
    c << "\t\t\t\t\t\t|      |      |      |      |" << e;
    c << "\t\t\t\t\t\t| " << bg[0][0] << "   |  " << bg[0][1] << "  |  " << bg[0][2] << "  |  " << bg[0][3] << "  |  " << e;
    c << "\t\t\t\t\t\t|______|______|______|______|" << e;
    c << "\t\t\t\t\t\t|      |      |      |      |" << e;
    c << "\t\t\t\t\t\t| " << bg[1][0] << "   |  " << bg[1][1] << "  |  " << bg[1][2] << "  |  " << bg[1][3] << "  |  " << e;
    c << "\t\t\t\t\t\t|______|______|______|______|" << e;
    c << "\t\t\t\t\t\t|      |      |      |      |" << e;
    c << "\t\t\t\t\t\t| " << bg[2][0] << "   |  " << bg[2][1] << "  |  " << bg[2][2] << "  |  " << bg[2][3] << "  |  " << e;
    c << "\t\t\t\t\t\t|______|______|______|______|" << e;
    c << "\t\t\t\t\t\t|      |      |      |      |" << e;
    c << "\t\t\t\t\t\t|  " << bg[3][0] << "  |  " << bg[3][1] << "  |  " << bg[3][2] << "  |  " << bg[3][3] << "  |  " << e;
    c << "\t\t\t\t\t\t|______|______|______|______|" << e;
}


void ttt::player()   //Heng
{ // player turn
    if (turn == "X")
    {
        cout << "\n\t\t" << name1 << ":Player[1] 'X' turn : ";
    }
    else if (turn == "O")
    {
        cout << "\n\t\t" << name2 << ":Player[2] 'O' turn : ";
    }
    cin >> choice;
    switch (choice)
    { // if input 1 it changes from '1' --> X or O
    case 1:
        row = 0;
        column = 0;
        break;
    case 2:
        row = 0;
        column = 1;
        break;
    case 3:
        row = 0;
        column = 2;
        break;
    case 4:
        row = 0;
        column = 3;
        break;
    case 5:
        row = 1;
        column = 0;
        break;
    case 6:
        row = 1;
        column = 1;
        break;
    case 7:
        row = 1;
        column = 2;
        break;
    case 8:
        row = 1;
        column = 3;
        break;
    case 9:
        row = 2;
        column = 0;
        break;
    case 10:
        row = 2;
        column = 1;
        break;
    case 11:
        row = 2;
        column = 2;
        break;
    case 12:
        row = 2;
        column = 3;
        break;
    case 13:
        row = 3;
        column = 0;
        break;
    case 14:
        row = 3;
        column = 1;
        break;
    case 15:
        row = 3;
        column = 2;
        break;
    case 16:
        row = 3;
        column = 3;
        break;
    default:
        c << "Invalid input!\n Please try again!" << e;
        ttt::player();
        break;
    }
    if (turn == "X" && bg[row][column] != " X" && bg[row][column] != " O")
    { // switch turn 'X' and 'O'
        bg[row][column] = " X";
        turn = "O";
    }
    else if (turn == "O" && bg[row][column] != " X" && bg[row][column] != " O")
    {
        bg[row][column] = " O";
        turn = "X";
    }
    else
    {
        cout << "Choose other gap!!!";
        ttt::player();
    }
    ttt::display_bg();
}


bool ttt::winner()    //Raksmey
{ // check for the winner
    for (int i = 0; i < 4; i++)
        if (bg[i][0] == bg[i][1] && bg[i][0] == bg[i][2] && bg[i][0] == bg[i][3] || bg[0][i] == bg[1][i] && bg[0][i] == bg[2][i] && bg[0][i] == bg[3][i]) // check for straight & horizontal line
            return false;                                                                                                                                 // return false mean game ended
    if (bg[0][0] == bg[1][1] && bg[0][0] == bg[2][2] && bg[0][0] == bg[3][3] || bg[0][3] == bg[1][2] && bg[2][1] == bg[3][0])                             // check for cross line
        return false;
    for (int i = 0; i < 4; i++) // check if draw
        for (int j = 0; j < 4; j++)
            if (bg[i][j] != " X" && bg[i][j] != " O")
                return true; // return true mean game still continue
    draw = true;
    return false;
}


int main()   //Pheakdey
{
r:
    system("CLS");
    system("color 71"); // change console background color
    ttt t;
    c << "\t\t\t\t  =========>Welcome to Tic Tac Toe<=========" << e;
    c << "please enter your name[Player1]: " << e;
    cin >> name1;
    c << "please enter your name[Player2]: " << e;
    cin >> name2;
    while (t.winner())
    { // make it runs until winner or tie
        t.display_bg();
        t.player();
        t.winner();
    }
    if (turn == "X" && draw == false)
    { // Display X is the winner
        system("color 70");
        cout << "\n\n\t\t\t\t\t\t  " << name2 << " :'O'  won the game";
        c << "\n\nRematch?\nPress R or r to continue...\nif not press any key to end" << e;
        cin >> restart;
        if (restart == "R" || restart == "r")
        {
            goto r;
        }
    }
    else if (turn == "O" && draw == false)
    { // Display X is the winner
        system("color 70");
        cout << "\n\n\t\t\t\t\t\t  " << name1 << " :'X'  won the game";
        c << "\n\nRematch?\nPress R or r to continue...\nif not press any key to end" << e;
        cin >> restart;
        if (restart == "R" || restart == "r")
        {
            goto r;
        }
    }
    else
    {
        system("color 70");
        cout << "\n\n\t\t\t\t\t\t   GG!!You are tied this round!!!"; // Display Draw
        c << "\n\nRematch?\nPress R or r to continue...\nif not press any key to end" << e;
        if (restart == "R" || restart == "r")
        {
            goto r;
        }
    }
    return 0;
}