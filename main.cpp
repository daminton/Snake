#include <iostream>
using namespace std;
bool game_over;
const int width = 20;
const int height = 20;
int x, y, fruit_x, fruit_y, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
void Setup()
{
    game_over = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruit_x = rand() % width;
    fruit_y = rand() % height;
    score = 0;
}
void Draw()
{
    system("cls");
    for (int i = 0; i < width+2; i++)
        cout << '#';
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#";
            if (i ==y && j == x)
                cout << "0";
            else if (i==fruit_y && j == fruit_x)
                cout<<"F";
            else
                cout << " ";
            
            if (j == width -1)
                cout << '#';
        }
        cout << endl;
    }

    for (int i = 0; i < width+2; i++)
        cout << '#';
    cout << endl;

}
void Input()
{

}
void Logic()
{

}
int main()
{
    Setup();
    while(!game_over)
    {
        Draw();
        Input();
        Logic();

    }
    return 0;
}