#!/bin/sh
~/checkcheck/check/checkmk/checkmk tests.check > tests.c
gcc tests.c helpers.c -I$HOME/checkcheck/check/src -I$HOME/checkcheck/check $HOME/checkcheck/check/src/.libs/libcheck.a -I../includes -lft -L ..
