## PE Parser

Coding a PE parser to learn about the PE file format

## Build

Use Cmake to build

```
cmake -S . -B build/
```

## Usage

```
 PE_Paser.exe <path to PE file>
```

## Note

Build will only succeed on Windows due to reliance on Windows.h. This dependency can be removed by simply copying the relevant structs and data types in a header file and including that in pe_parser.h file
