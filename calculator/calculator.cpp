#include <iostream>
#include <string>
using namespace std;

//hi guys im new to this "c++" thing
class Calculator {
private: 
    char op;
    int a, b;
    char decision;
public:
    bool confirm(string msg){
        do{
            cout << msg << " (y/n) :";
            cin >> decision;
            cin.ignore(10000, '\n');

            if (decision == 'n'){
                return false;
            } else if (decision == 'y'){
                return true;
            } else {
                cout << "\nnice try buddy\n";
            }
        } while (true);
    }d
    void run() {
        do{
            cout << "what operator do you want to use? (+, -, *, / for now): ";
            cin >> op;
            cin.ignore(10000, '\n');
            if (op != '+' && op != '-' && op != '*' && op != '/') {
                cout << "good one, invalid operator\n";
                continue;
            }
            if (confirm("your operation is " + string(1, op) + ", is that fine?")) {
                break;
            }
        } while (true);
        
        do{
            cout << "first number?: ";
            
            if(!(cin >> a)){
                cout << "not a number, try again \n";
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }
        } while (!confirm("you first number is " + to_string(a) + ", is that fine?"));

        do{
            cout << "second number?: ";
            
            if(!(cin >> b)){
                cout << "nut a number, try again \n";
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }
        } while (!confirm("your second number is " + to_string(b) + ", is that fine?"));
        cout << "your numbers are " << a << " and " << b << endl;
        switch(op){
            case '+':
                cout << a << " + " << b << " = " << a+b << endl;
                break;
            case '-':
                cout << a << " - " << b << " = " << a-b << endl;
                break;
            case '*':
                cout << a << " * " << b << " = " << a*b << endl;
                break;
            case '/':
                cout << a << " / " << b << " = " << a/b << endl;
                break;
        }
    }
};

int main() {
    Calculator calculator;
    calculator.run();

    return 0;
}