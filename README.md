# cppdev-template

[![Project
Status](http://www.repostatus.org/badges/latest/concept.svg)](http://www.repostatus.org/#concept)

> A template for a C++ projects

## About

This repository hosts an example template for the folder structure of a C++ project

## Dependencies

To build the C++ library, you need to the following dependencies:

- `make`, `meson` and `ninja` as build tools (instead of autotools or cmake)

To run the unit tests, lints and everyhthing you'll need

- [`googletest`](https://github.com/google/googletest), 
- `clang-format` for code formatting,
- `cpplint`, `cppcheck` for static code analysis.

You can install most dependencies using conda.  

## Install

Clone/download the project and run:

```bash
make
```

or in debug mode:

```bash
make debug
```

This build a shared library called `libcppdev.so` in `build/src/`.

To run unit tests, lints, etc. call:

```bash
make test
make format
make lint
make check
```

## Documentation

TODO

## Author

 Simon Dirmeier <a href="mailto:simon.dirmeier @ web.de">simon.dirmeier @ web.de</a>