#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::time;

int main(){
    srand( time(0) );
    
    int ans, guess;
    ans = rand() % 1000 + 1;
    for(int i=0; i < 100; i++){
        cout << "Please take a guess between 1 - 100" << endl;
        cin >> guess;
        if(guess == ans){
            cout << "BINGO! See you next Time" << endl;
            return 0;
        }
        else if(guess > ans){
            cout << "Smaller!" << endl;
        }
        else{
            cout << "Larger!" << endl;
        }
    
        if(i == 19){
            cout << "You have no guesses left! See you next time." << endl;
        }
    }
    return 0;
}