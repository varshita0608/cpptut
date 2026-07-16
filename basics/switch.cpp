//CALCULATOR USING SWITCH CASE
#include <iostream>
using namespace std;

int main() {
    int x,y;
    char op; //enter arithmatic operation (+,-,/,*,%)
    cin>>x>>op>>y;
    switch(op){
        case '+':
        cout<<x+y;
        break;
        
        case '-':
        cout<<x-y;
        break;
        
        case '*':
        cout<<x*y;
        break;
        
        case '/':
        cout<<x/y;
        break;
        
        case '%':
        cout<<x%y;
        break;
        
        default:
        cout<<"invalid operator";
        break;
    }
}