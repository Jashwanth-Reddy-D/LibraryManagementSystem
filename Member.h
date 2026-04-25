#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;

class Member {
public:
    int id;
    string name;

    Member(int i = 0, string n = "") {
        id = i;
        name = n;
    }
};

#endif