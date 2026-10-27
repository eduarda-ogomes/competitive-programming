#!/bin/bash
# Uso: ./run.sh arquivo.cpp ou ../../run.sh 


if [ -z "$1" ]; then
    echo "Uso: ./run.sh <arquivo.cpp>"
    exit 1
fi

FILE=$1
BASENAME="${FILE%.*}"

echo "Compilando $FILE..."
g++ -O2 -Wall "$FILE" -o "$BASENAME.out"

if [ $? -eq 0 ]; then
    echo "Executando $BASENAME.out..."
    echo "--------------------------"
    time "./$BASENAME.out"
    echo "--------------------------"
else
    echo "Erro de compilação!"
fi
