
#include <iostream> 
using namespace std; 
 
int size, arr[100]; 
void insertData() 
{ 
    cout << "enter the arr size:"; 
    cin >> size; 
 
    for (int i = 0; i < size; i++) 
    { 
        arr[i] = rand() % 100 + 1; 
        cout << "\t" << arr[i]; 
    } 
    cout << "\n"; 
} 
 
// void displayData() 
// { 
//     for (int i = 0; i < size; i++) 
//         cout << arr[i]; 
// } 
void selectionsort() 
{ 
    for (int i = 0; i < size - 1; i++) 
    { 
        for (int j = i + 1; j < size; j++) 
        { 
            if (arr[i] > arr[j]) 
            { 
                int temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            } 
        } 
    } 
} 
void display() 
{ 
    cout << "selection searching:" << endl; 
    for (int i = 0; i < size; i++) 
    { 
 
        cout << "\t" << arr[i]; 
    } 
} 
int main() 
{ 
    insertData(); 
    selectionsort(); 
    cout << endl; 
    display(); 
}