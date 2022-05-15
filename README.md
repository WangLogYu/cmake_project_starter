### A Simple Starter Template for CMake Project 

Latest update: 15th May, 2022

## Project Structure

- assets: resources and config files, e.g. a.yaml, b.png
- examples: example usage of the code/project
- include: \*.h header files
- src: \*.cc source files
- tests: test cases

## TODO list

- [x] A working template for CMake project
- [] Add structure for (Unit)Tests
- [] Add structure for Debug/Release build
- [] Add link to repo: A Starter Template for OpenCV CMake Project
- [] Add link to repo: A Simple VIM Config Guide to C/C++ Project 
- [] Add coding style checker
- [] Add automated CI/CD

## Conventions
- Target ISO C++14 by default
- All header files within top-level include are suffixed with .in (they will be configured in top-level CMakeLists)
- Use ```namespace``` to scope your codes
- All codes **MUST** have a ***copyright*** header

### Copyright
MIT License, Copyright (c) 2022 Wang, Yu(wang.log.yu@gmail.com) 

```
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
```
