#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include "Library.h"

class FileHandler {
public:
    static void saveBooks(Library &lib);
    static void loadBooks(Library &lib);
};

#endif