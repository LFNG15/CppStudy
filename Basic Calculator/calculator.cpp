#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    int b;
    int sum;
    string userinput;

    cout << "Please enter a number: \n";
    cin >> a;

    cout << "Now choose what you want to do: +, -, *, %. \n";
    cin >> userinput;
        if(userinput == "+"){
            cout << "Choose another number: \n";
            cin >> b;
            sum = a + b;
            cout << "The total of those numbers are: " << sum << endl;
        }
        else if(userinput == "-"){
            cout << "Choose antoher number: \n";
            cin >> b;
            sum = a - b;
            cout << "The total of those number are: " << sum << endl;
        }
        else if(userinput == "*"){
            cout << "Choose another number: \n";
            cin >> b;
            sum = a * b;
            cout << "The total of tohse numbers are: "<< sum << endl;
        }
        else if(userinput == "%"){
            cout << "Choose another number: \n";
            cin >> b;
            sum = a % b;
            cout << "The total of those numbers are: " << sum << endl;
        }
        return 0;
}