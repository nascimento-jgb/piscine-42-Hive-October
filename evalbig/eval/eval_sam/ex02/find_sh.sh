#!/bin/sh
find . -type f -name "*.sh" | rev | cut -f 2- -d '.'| cut -d '/' -f1 | rev

