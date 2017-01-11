#include "Arguments.h"

Arguments::Arguments(int argc, char** argv) {
  this->argc = argc;
  this->argv = argv;
  parse_flag_from_args();
  parse_type_from_args();
 }

void Arguments::parse_flag_from_args() {
  const int FLAG_ARG_INDEX = 1;
  const int CHAR_INDEX = 1;
  if (argc > 1) {
    flag = argv[FLAG_ARG_INDEX][CHAR_INDEX];
  }
}

void Arguments::parse_type_from_args() {
  if (argc == 1) {
    type = NONE;
  } else if (argc == 2) {
    type = STRING;
    fileNameIn = argv[2];
  } else if (argc == 3) {
    type = FLAG_AND_STRING;
  } else if (argc == 4) {
    type = STRING;
    shift = argv[3];
  } else if (argc == 5) {
    type = FLAG_AND_STRING;
  } else if (argc == 6) {
    type = STRING;
    fileNameOut = argv[5];
  }
}

std::string Arguments::get_fileNameIn() {
  return fileNameIn;
}

std::string Arguments::get_fileNameOut() {
  return fileNameOut;
}
std::string Arguments::get_shift() {
  return shift;
}
ArgumentType Arguments::get_type() {
  return type;
}

std::string Arguments::get_flag() {
  return flag;
}
