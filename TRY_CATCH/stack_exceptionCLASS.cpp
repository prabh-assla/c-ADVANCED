#include <iostream>
#include <string>

const int max = 3;

class STACK{
    int a[max];
    int top;

    public :
        class Range{
            int SIGNAL;

        public: 
            Range(): SIGNAL{-1} {}

            Range(int SIGNAL): SIGNAL{SIGNAL} {}

            std::string response(){
                if(!SIGNAL)
                    return "stackoverflow";

                if(SIGNAL)
                    return "stackunderflow";

            return "__default";
        }
    };

    STACK(): top{-1} {}

    int push(int x){
        if(top == max-1)
            throw Range(0).response();

        else
            return a[++top] = x; 
    }

    int pop(){
        top;
        if(top == -1)
            throw Range(1).response();

        else
            return a[--top];
    }

};

    // class Range{
    //         int SIGNAL;                                        -----------> FAILS (parameterized function won't be called this way... ON LINE 34 and 43)

    // public: 
    //     Range(): SIGNAL{-1} {}

    //     Range(int SIGNAL): SIGNAL{SIGNAL} {}

    //     std::string response(int SIGNAL){
    //         if(SIGNAL)
    //             return "stackoverflow";

    //         if(SIGNAL)
    //             return "stackunderflow";

    //     return "__default";
    // }
    // };

int main(){
    try{
        STACK s;
        s.push(3);
        s.push(6);
        s.pop();
        s.pop();
        s.pop();
    }
    catch(std::string x){
        std::cout << "EXCEPTION IDENTIFIED : " << x << std::endl;
    }

return 0;
}
