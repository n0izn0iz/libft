#!/bin/sh
~/checkcheck/check/checkmk/checkmk tests.check > tests.c
gcc tests.c helpers.c -I/nfs/zfs-student-3/users/2014_paris/nmeier/checkcheck/check/src -I/nfs/zfs-student-3/users/2014_paris/nmeier/checkcheck/check /nfs/zfs-student-3/users/2014_paris/nmeier/checkcheck/check/src/.libs/libcheck.a -I../includes -lft -L ..
