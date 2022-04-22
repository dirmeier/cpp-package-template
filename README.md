# cpp-package-template

[![Project
Status](http://www.repostatus.org/badges/latest/concept.svg)](http://www.repostatus.org/#concept)
![ci](https://github.com/dirmeier/cppdev-template/workflows/ci/badge.svg)

> A template for C++ projects

## About

This repository hosts an example template for the folder structure of a C++ project. 
Additionally, you can find a Dockerfile that sets up a C++ programming environment [here](https://github.com/dirmeier/dockerfiles/blob/master/cppenv/Dockerfile).


## Dependencies

To build the C++ library, you need to the following dependencies:

- `make`, `meson` and `ninja` as build tools (instead of autotools or cmake)

To run the unit tests, lints and everyhthing you'll need

- [`googletest`](https://github.com/google/googletest), 
- `clang-format` for code formatting,
- `cpplint`, `cppcheck` for static code analysis.

To create documentation files you also need to install 

- `doxygen`

You can install most dependencies using conda.  

## Usage

Clone/download the project and run:

```bash
make
```

This build a shared library called `libcppdev.so` in `build/src/`, an executable called `cppdev` and 
a unit test suite in `build/tests`/

In debug mode:

```bash
make debug
```

To document everything call:

```bash
make docs
```

This builds de

To run unit tests, lints, etc. call:

```bash
make test
make format
make lint
make check
```

## Author

 Simon Dirmeier <a href="mailto:simon.dirmeier @ web.de">simon.dirmeier @ web.de</a>
