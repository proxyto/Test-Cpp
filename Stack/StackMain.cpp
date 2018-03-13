#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;

void f(Stack &a) {
    Stack b = a;
}


int main() {

    Stack s(2); //declare a stack object s which can store 2 ints
    s.push(4); //add int 4 into stack s

    //s = [4]
    s.push(13); //add int 13 into stack s
    //s = [4,13]

    f(s); //calls the function f which takes in parameter Stack a , and sets Stack b = to it.
    //error here - as 2 pointers point to the same location in memory !
    cout << s.pop() << endl; //print out top element(most recently pushed) element.
    //so should output 13
    return 0;
}



//#include <iostream> 
//#include "Num.h" 
//using namespace std;
//int main()
//{
//	Num n(35);
//	cout << n.getNum() << endl;
//	return 0;
//}