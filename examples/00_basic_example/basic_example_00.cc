/************************************************************************************
MIT License

Copyright (c) 2022 Wang, Yu(wang.log.yu@gmail.com)

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
 
************************************************************************************/

// =====================================================================================
//       Filename:  basic_example_00.cc
//
//    Description: Sample code build examples 
//
//        Version:  1.0
//        Created:  04.05.2022
//       Revision:  04.05.2022  
//       Compiler:  g++/gcc
//
//         Author:  Wang,Yu(wang.log.yu@gmail.com)
// =====================================================================================

#include "include/hello.h"
#include <string>

int main() {
  std::string my_name = "00_basic_example";
  hello(my_name);

  return 0;
}
