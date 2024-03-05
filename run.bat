#!/bin/bash

cmake -S . -B build
cp build/compile_commands.json .
cmake --build build
./build/Bank
