/*
 * Fileh.h
 *
 *  Created on: 2017.01.11.
 *      Author: medeaeva
 */

#ifndef FILEH_H_
#define FILEH_H_

#include <fstream>
#include <iostream>
#include "Arguments.h"

class Filehandler {
private:
  std::string source_filename;
  std::string output_filename;
  std::string content;
public:
  Filehandler(std::string fileNameIn, std::string fileNameOut);
  ~Filehandler();
  std::string read_file();
  void write_file(std::string decrypted);
};

#endif /* FILEH_H_ */
