#include <iostream> 
using namespace std; 
int n; 
int size; 
int arr[100]; 
void check() 
{ 
    cout << "enter the arr size:"; 
    cin >> size; 
    for (int i = 0; i < size; i++) 
    { 
        arr[i] = rand() % 100 + 1; 
        cout << "\t" << arr[i]; 
    } 
    cout << "\n"; 
    for (int i = 0; i < size - i - 1; i++) 
    { 
        for (int j = 0; j < size; j++) 
        { 
            if (arr[j] > arr[j + 1]) 
            { 
                int temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            } 
        } 
    } 
    cout << "bubble searching:" << endl; 
    for (int i = 0; i < size; i++) 
    { 
 
        cout << "\t" << arr[i]; 
    } 
} 
int main() 
{ 
    check(); 
}