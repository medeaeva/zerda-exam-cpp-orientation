#ifndef ARGUMENTS_H_
#define ARGUMENTS_H_
#include <string>


enum ArgumentType {
  NONE,
  FLAG,
  FLAG_AND_STRING,
  STRING
};

class Arguments {
private:
  int argc;
  char** argv;
  std::string fileNameIn;
  std::string fileNameOut;
  std::string shift;
  std::string flag;
  ArgumentType type;
  void parse_flag_from_args();
  void parse_type_from_args();
public:
  Arguments(int argc, char** argv);
  std::string get_fileNameIn();
  std::string get_fileNameOut();
  std::string get_shift();
  ArgumentType get_type();
  std::string get_flag();
};

# endif
