//Hasil Perhitungan
#include <iostream>
#include <sstream>
#include <stack>
#include <limits>
#include <string>
using namespace std;
 
int priority(char z) {
    int h;
    if (z == '^')
        h = 1;
    else if (z == '*' || z == '/')
        h = 2;
    else if (z == '+' || z == '-')
        h = 3;
    return h;
}
 
int main() {
    string infix;
	
    cout<<" Infix : ";
    getline(cin, infix);
 
    stack<char> opr_stack;
 
    stringstream postfix;
 
    for (unsigned i = 0; i < infix.length(); i++) {
        if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^') {
            while (!opr_stack.empty() && priority(opr_stack.top()) <= priority(infix[i])) {
            postfix<<opr_stack.top();
            opr_stack.pop();
            }
        opr_stack.push(infix[i]);
        } else if (infix[i] == '(') {
            opr_stack.push(infix[i]);
        } else if (infix[i] == ')') {
            while (opr_stack.top() != '(') {
            postfix<<opr_stack.top();
            opr_stack.pop();
            }
            opr_stack.pop();
        } else {
            postfix<<infix[i];
        }
    }
 
    while (!opr_stack.empty()) {
        postfix << opr_stack.top();
        opr_stack.pop();
    }
 
    cout <<endl<< " Postfix: "<<postfix.str()<<endl;
 
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    return 0;
}
