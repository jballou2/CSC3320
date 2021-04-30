#!/bin/bash
echo "enter number of days"
read n
find /home/jballou1 "csc3320" -atime +$n -type f |zip compress -@
