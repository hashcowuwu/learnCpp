// Blank cpp file
#include "class.h"
#include <algorithm>
#include <cstddef>
#include <stdexcept>
#include <string>

HArray::HArray() : logicalSize{0},allocatedSize{kInitialSize}{}

HArray::HArray(size_t n,const std::string &val):logicalSize{n},allocatedSize{n * 2} {
  elems = new std::string[allocatedSize];
  std::fill(begin(),end(),val);
}

HArray::~HArray(){ delete[] elems;}

HArray::iterator HArray::begin() { return elems; }

HArray::iterator HArray::end() { return elems + logicalSize; }

size_t HArray::size() {return logicalSize;}

bool HArray::empty() {return logicalSize == 0;}

void HArray::push(const std::string &elem) {
  if(logicalSize == allocatedSize) {grow();}
  *(begin() + logicalSize) = elem;
  logicalSize ++ ;
}

void HArray::grow() {
  auto new_elems = new std::string[allocatedSize*=2];
  for (size_t i = 0 ; i < logicalSize ;  ++ i ) {
    *(new_elems + 1) = *(begin() + i );
  }
  elems = new_elems;
}


std::string &HArray::operator[](size_t index) {
  return elems[index];
}

std::string &HArray::at(size_t index) {
  if(index > logicalSize)  {
    throw std::out_of_range("Index out of range");
  }
  return elems[index];
}
