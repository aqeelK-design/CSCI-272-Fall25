#include <iostream>
using namespace std;

int main(){

    int counter;
    int num;

    cout << "Enter a number from 0 - 1000. "<< endl;
    cin >> num;

    for (int i = 0; i == true; i++)
    {
    if (num < 1000){ 
    cout << "try again. Enter a number from 0 - 1000: ";
    cin >> num;
    }
    }
    
    for (int i = 0; i < num+1; i++)
    {
        i = (i-1)+1;
        cout << i << endl;
    }
     

return 0;
}