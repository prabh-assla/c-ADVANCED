#include <bits/stdc++.h>
#include <string>

typedef enum{
    sat=-90, sun
} weekends;

typedef union{
    int val;
    char name[20];
    char rname[20];
} weekendsies;

int main(){
    weekends w = sun;
    weekendsies p;

    p.val = 90;
    strcpy(p.name, "kiss eme more madonna!!!");

    std::cout << sat*sun << std::endl;
    std::cout << sun << p.name << " " << p.val << " " << p.rname << std::endl;

return 0;
}