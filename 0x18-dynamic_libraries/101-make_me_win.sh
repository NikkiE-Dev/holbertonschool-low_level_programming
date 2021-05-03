#!/bin/bash
wget -O-https://github.com/NikkiE-Holberton/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/winner.so
LD_PRELOAD=./winner.so
