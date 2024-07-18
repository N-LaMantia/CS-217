#include <iostream>
using namespace std;

int main()
{
    int barbell_left_side = 0;
    int barbell_right_side = 0;
    bool balanced = false; 

    for (int i = 0; i < 10; i++){
        cout << "Enter the weights on each side of the barbell" << endl;
        cin >> barbell_left_side;
        cin >> barbell_right_side;
        if (barbell_left_side == barbell_right_side) {
            balanced = true;
            i += 10; 
            cout << "The barbell is balanced.";
        } else {
            cout << "The barbell is unbalanced. ";
            cout << "Please readjust the weights on each side so they are the same." << endl;
        }
    }
    
    return 0;
}