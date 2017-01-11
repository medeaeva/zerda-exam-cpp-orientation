#include "Cypher.h"

Arguments argument;
Filehandler filein;

std::string _shift = argument.get_shift();

int shift = stoi(_shift);

//use filehandler read file to get a string;


std::string Cypher::encrypt(std::string text, int shift) {
  std::string result = "";

  for (int i = 0; i < text.length(); i++) {

    if (isupper(text[i]))
      result += char(int(text[i] + shift - 65) % 26 + 65);

    else
      result += char(int(text[i] + shift - 97) % 26 + 97);
  }
  return result;
}
