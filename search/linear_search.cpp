#include <iostream>
using namespace std;

int i, size, arr[100];
void random();
void display();
void check();

void random()
{
    for (i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void display()
{
    for (i = 0; i < size; i++)
    {
        cout << arr[i];
        cout << "\t";
    }
    cout << endl;
}
void check()
{
    int ch, num=0;
    cout << "enter the check number:";
    cin >> ch;

    for (i = 0; i < size; i++)
    {
        if (ch == arr[i])
        {
            cout << "index:" << i;

            num = 1;
            break;
        }
    }
    if (num == 0)
    {
        cout << "is not found";
    }
}
int main()
{
    cout << "entert the array:";
    cin >> size;
    random();
    display();
    check();
}