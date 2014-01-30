#!/bin/bash
# pretend to be a c interpreter
tmp="${c_tmp:-/dev/shm/c}"
bin="${tmp}/$(date +%s)$$.out"
cc="${CC:-$(which gcc)}"
mkdir -p "$tmp"

# print the header if run interactively
"$cc" --version
echo "Use Ctrl-D to exit and run the program."

# go
"$cc" -xc -o "$bin" - &&
"$bin"
