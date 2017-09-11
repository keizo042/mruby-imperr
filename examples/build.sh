#!/bin/sh
cd $(dirname $0)
gcc -I../mruby/include ../mruby/build/host/lib/libmruby.a exc.c -lm -o exc
