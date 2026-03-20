#!/bin/bash

count=$(ls | grep "\.c$" | wc -l) 

echo "il y a $count fichier .c dans le dossier"

