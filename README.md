# A Simple Starter Template for CMake Project 

Latest update: 31th May, 2022

## Project Structure

- assets/: resources and config files, e.g., a.yaml, b.png
- examples/: example usage of the code/project
- include/: \*.h.in header files(they will be configured in top-level CMakeLists)
- src/: \*.cc source files
- tests/: test cases

## TODO list

- [x] A working template for CMake project
- [ ] Add structure for (Unit)Tests
- [ ] Add structure for Debug/Release build
- [ ] Add link to repo: A Starter Template for OpenCV CMake Project
- [ ] Add link to repo: A Simple VIM Config Guide to C/C++ Project 
- [ ] Add coding style checker: [Goolge C++ Style Guide(GCSG)](https://google.github.io/styleguide/cppguide.html#cpplint), [Guide Support Library(GSL)](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#S-gsl)
- [ ] Add automated CI/CD

## Coding Conventions
- Target ISO C++14 by default.
- Coding Styles are adapted and summarized from [GSL](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#main) and [GCSG](https://google.github.io/styleguide/cppguide.html); For more detailed explanation, refer to the original guidelines.

### Scoping
- Use `namespace` to scope your codes.

### Naming
- General Rules:
  - Consistency beats personal taste[^1]. Consistency is more important than individual preferences[^2].
  - In general, strictly follow inhouse rules; Follow third-party rules when you use part of their libraries.
  - Optimize Readability:
    - Length of a name should be proportional to the length of scope[^1].
    - Descriptiveness should be proportional to the name's scope of visibility[^2].
- Naming Files[^2]:
  - Filenames should be lowercase and prefer using underscore "_". Make your filenames very specific.
  - Each `.cc` file should be paired with a `.h` or `.h.in` file, e.g. `foo_bar.h` and ```foo_bar.cc``` defining a class named `FooBar`.
- Naming Types[^2]: use `CammelCase` with a capital letter for each word, with no underscores for all types including classes, structs, type aliases, enums and type template parameters.
- Naming Variables:
  - Prefer underscore style names[^1].
  - Common Variable Names: lowercase with underscore "_" between each word[^2].
  - Class Data Members: Common Variable Names with a trailing underscore "_"; Struct data members fall into Common Variable Names[^2].
  - Constant Names: CamelCase with a leading "k", for all `const` and `constexpr` variables[^2].
- Naming Enumerators[^2]: memebers of an `enum` should be named like Constant Names.
- Naming Functions:
  - Ordinary Functions: Common Variable Names, do not Capitalize[^1] (This rule conflicts [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)).
  - Accessors and Mutators: Common Variable Names[^2].
- Naming Namespaces[^2]:
  - General rules: Common Variable Names. Optimise Readability. Do not save horizontal spaces for namespace names.
  - Top-level namespace should be the name of the project. 
- Naming Macros:
  - Avoid Macros if possible; Use UPPERCASE with underscore in between, e.g. ```UPPERCASE_MACRO```[^2].
  - Use ```ALL_CAPS``` for Macro Names only[^1].

### Comments[^2]
- General Rules:
  - Optimize Readability, make others understand and contribute to your codes easily; Pay attention to grammar, punctuation and spelling.
  - Do not verbose or state the obvious.
  - Prefer using "//".
- File-level Comments:
  - Every file **MUST** start with a **license boilerplate**.
  - Every file **MUST** start with a **file-comment boilerplate**.
  - A `.h` file-level comment **SHOULD** briefly describing what the file contains with 1 or 2 sentences. Comment for each individual abstraction/declaration should be placed immediately preceding them.
  - Briefly state intention/functionality of declared functions/classes within header files if not obvious[^1]. Comments regarding non-trivial implementations can be placed in source files.[^1]
  - Do not replicate comments in `.h` or `.cc` files.
- Class/Function Comments:
  - Document usage (a small code snippet, when and where to use, multithreaded safety) in `.h` file for declared class if **non-obvious**.
  - Comments on implementation details and how class operates should go in `.cc` files
  - Tricky, non-obvious, important or complicated codes should have comments above them.
- Variable Comments:
  - Class Data Members: The purpose of each data member **MUST** be clear. Pay particular attention to multithreaded safety, locks, synchronization conditions and manually allocated resources if not obvious.
  - Global Variables: State why and where they are needed.
- Function Argument Comments:
  - Consider using a simple struct if there are several configuration options for a function call

### Formatting
- Follow [Google C++ Style Guide Formatting](https://google.github.io/styleguide/cppguide.html#Formatting) in general. But there are exceptions when [C++ Core Guideline](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#main) wins:
  - No space preceding pointer or reference operators: *, & (against [GCSG](https://google.github.io/styleguide/cppguide.html#Formatting)) 
  - Only allow a single declaration per line (against [GCSG](https://google.github.io/styleguide/cppguide.html#Formatting))

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
[^3]: [Goolge C++ Style Guide: Formatting](https://google.github.io/styleguide/cppguide.html#Formatting)

