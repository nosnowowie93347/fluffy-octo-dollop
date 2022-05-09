#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

srand (time(NULL));

int comp = rand() % 5;
int comp1 = rand() % 5;

std::cout << "\n";
std::cout << "Hello and Welcome to Would You Rather?\n";
std::cout << "\n";

cout << "Would you rather: ";

switch (comp){
case 1:
std::cout << "Have a bad clothes day";
break;
case 2:
std::cout << "Eat dog food for every meal";
break;
case 3:
std::cout << "Wake up 3 hours earlier than normal";
break;
case 4:
std::cout << "Be the God of light";
break;
case 5:
std::cout << "Never be able to speak again";
break;
}

cout << " or ";

switch (comp1){
case 1:
std::cout << "have a bad hair day?\n";
break;
case 2:
std::cout << "eat cat food with every meal?\n";
break;
case 3:
std::cout << "sleep 3 hours later than normal?\n";
break;
case 4:
std::cout << "be the god of darkness?";
break;
case 5:
std::cout << "always have to tell the truth?";
break;
}

}
