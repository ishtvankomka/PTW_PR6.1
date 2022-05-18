#include <iostream>
using namespace std;
typedef int Info;

struct Elem
{
    Elem* link1;
    Elem* link2;
    Info value;
};


int main() {
    Elem* p = new Elem; //1
    p->value = 1; //2
    p->link2 = NULL; //3
    p->link1 = new Elem; //4
    p->link1->value = 2; //5
    p->link1->link2 = new Elem; //6
    p->link1->link2->value = 3; //7
    p->link1->link2->link2 = NULL; //8
    p->link1->link2->link2 = p->link1; //9
    p->link1->link1 = new Elem; //10
    p->link1->link1->value = 4; //11
    p->link1->link1->link2 = p->link1->link2; //12
    p->link1->link1->link1 = p; //13

    printf("%d ", p->link1->link1->value);
    delete p->link1->link1;
    
    printf("%d ", p->link1->link2->value);
    delete p->link1->link2;
    
    printf("%d ", p->link1->value);
    delete p->link1;
    
    printf("%d ", p->value);
    delete p;
    
    return 0;
}
