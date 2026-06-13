#pragma once

#include <iostream>
#include <string>

#include "core/content.hpp"

class DataManager {

    std::string file;

    public:

        DataManager (const std::string & file): file(file) {}

        void write_content(const Content & content);
        void update_content (int id);
        void remove_content(int id);
        Content * get_content (int id);

};