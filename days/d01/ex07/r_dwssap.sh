#!/bin/bash

cat /etc/passwd | grep -v '#' | awk 'NR % 2 == 0' | sed 's/:\*:.*//g' | sed -n "$FT_LINE1,$FT_LINE2"p | rev | tr '\n' ', ' | rev | cut -c 2- | rev | sed 's/$/./'
