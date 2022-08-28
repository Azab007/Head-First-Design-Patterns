#include <iostream>
#include "Duck.h"
#include "MallardDuck.h"
#include "Turkey.h"
#include "WildTurkey.h"
#include "TurkeyAdaptor.h"
using namespace std;

int main()
{
    Duck *d = new MallardDuck();
    Turkey *t = new WildTurkey();
    Duck *turkeyAdaptor = new TurkeyAdaptor(t);
    cout << "The turkey says....." << endl;
    t->gobble();
    t->fly();
    cout << "The Duck says....." << endl;
    d->quack();
    d->fly();
    cout << "The TurkeyAdaptor says....." << endl;
    turkeyAdaptor->quack();
    turkeyAdaptor->fly();
    return 0;
}
