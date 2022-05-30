### A Simple Starter Template for CMake Project 

Latest update: 30th May, 2022

## Project Structure

- assets: resources and config files, e.g. a.yaml, b.png
- examples: example usage of the code/project
- include: \*.h.in header files
- src: \*.cc source files
- tests: test cases

## TODO list

- [x] A working template for CMake project
- [ ] Add structure for (Unit)Tests
- [ ] Add structure for Debug/Release build
- [ ] Add link to repo: A Starter Template for OpenCV CMake Project
- [ ] Add link to repo: A Simple VIM Config Guide to C/C++ Project 
- [ ] Add coding style checker
- [ ] Add automated CI/CD

## General Conventions
- Target ISO C++14 by default.
- All header files within top-level include are suffixed with .in (they will be configured in top-level CMakeLists).
- Coding Styles are adapted and summarized from [GSL](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#main) and [GCSG](https://google.github.io/styleguide/cppguide.html); For more detailed explanation, refer to the original guidelines.


## Coding Conventions
- Use ```namespace``` to scope your codes.
- Briefly state intention/functionality of declared functions/classes within header files[^1]. Comments regarding non-trivial implementations can be placed in source files.[^1]

### Naming
- General Rules:
  - Consistency beats personal taste[^1]. Consistency is more important than individual preferences[^2].
  - In general, strictly follow inhouse rules; Follow third-party rules when you use part of their libraries.
  - Optimize Readability:
    - Length of a name should be proportional to the length of scope[^1].
    - Descriptiveness should be proportional to the name's scope of visibility[^2].
- Naming Files[^2]:
  - Filenames should be lowercase and prefer using underscore "_". Make your filenames very specific.
  - Each ```.cc``` file should be paired with a ```.h``` or ```.h.in``` file, e.g. ```foo_bar.h``` and ```foo_bar.cc``` defining a class named ```FooBar```.
- Naming Types[^2]: use ```CammelCase``` with a capital letter for each word, with no underscores for all types including classes, structs, type aliases, enums and type template parameters.
- Naming Variables:
  - Prefer ```underscore_style``` names[^1].
  - Common Variable Names: lowercase with underscore "_" between each word, including *struct data members*[^2].
  - Class Data Members: Common Variable Names with a trailing underscore "_"[^2].
  - Constant Names: CamelCase with a leading "k", for all `const` and `constexpr` variables[^2].
- Naming Enumerators[^2]: memebers of an ``enum``` should be named like Constant Names.
- Naming Functions:
  - Ordinary Functions: Common Variable Names, do not Capitalize[^1]. (This rule conflicts [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)).
  - Accessors and Mutators: Common Variable Names[^2].
- Naming Namespaces[^2]:
  - General rules: Common Variable Names. Optimise Readability. Do not save horizontal spaces for namespace names.
  - Top-level namespace should be the name of the project. 
- Naming Macros:
  - Avoid Macros if possible; Use UPPERCASE with underscore in between, e.g. ```UPPERCASE_MACRO```[^2].
  - Use ```ALL_CAPS``` for Macro Names only[^1].

### Formatting
- All codes **MUST** have a ***copyright*** header.
- All codes **MUST** have a ***description*** header.
- About "{"[^1]:
  - Function definitions: put "{" on a seperate line 
  - Otherwise: do not put "{" on a seperate line



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

### References
[^1]: [C++ Core Guideline](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#main)
[^2]: [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
