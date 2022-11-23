class Base{};
class derived1: public Base{};
class derived2: public Base{};

int main(){
    Base* b1;
    Base* b2;

    derived1 d1;
    derived2 d2;

    b1 = static_cast <Base*> (&d1);
    b2 = static_cast <Base*> (&d2);

    d1 = static_cast <derived1*> (&b1);
    d2 = static_cast <derived2*> (&b2);

return 0;
}
