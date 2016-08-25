#!/usr/bin/env bash

files=("https://raw.githubusercontent.com/git/git/master/color.h",
       "https://raw.githubusercontent.com/git/git/master/color.c")

for f in ${files[@]}; do
    if [[ ! -f $(basename $f) ]]; then
        wget $f
    fi
done

