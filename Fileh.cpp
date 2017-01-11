#include "Fileh.h"

Filehandler::Filehandler(std::string fileNameIn, std::string fileNameOut) {
  content = "";
  this->source_filename = fileNameIn;
  this->output_filename = fileNameOut;
}


Filehandler::~Filehandler() {

}

std::string Filehandler::read_file() {
  std::ifstream source_file(fileNameIn);
  if (source_file.is_open()) {
    std::string buffer;
    std::string content = "";
    while (getline(source_file, buffer)) {
      content += buffer + "\n";
    }
    source_file.close();
    return content;
  }

  else {
    std::cerr << "Could not open the file" << std::endl;
    return "ERROR";
  }
}

void Filehandler::write_file(std::string decrypted) {
  std::ofstream outfile;
  outfile.open(fileNameOut);
  outfile << decrypted;
  outfile.close();
  return;
}
