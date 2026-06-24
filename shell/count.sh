#!/bin/sh

X=$(ls | grep -c  "\.c$")
Y=$(ls | grep -c "\.h$")
Z=$(($X + $Y))

echo "Fichiers .c : $X"
echo "Fichiers .h : $Y"
echo "Total : $Z"
