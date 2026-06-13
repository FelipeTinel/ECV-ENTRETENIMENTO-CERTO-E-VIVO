#include <fstream>
#include <iostream>

#include "services/data_manager.hpp"

void DataManager::write_content (const Content & content) {

    std::ofstream write_file(file);

    if (write_file.is_open()) {

        write_file << "pinto" << std::endl;

        write_file.close();

    }

}


