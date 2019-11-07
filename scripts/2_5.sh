#!/bin/bash
find ~ -type f -regex ".*\.\(txt\)" > /tmp/2_5.txt
cat /tmp/2_5.txt | xargs -l ls -l | tr -s ' ' '\t' | cut -f5 | awk '{ sum+=$1 } END { print sum }'
cat /tmp/2_5.txt | xargs -l wc -l | tr -s ' ' '\t' | cut -f1 | awk '{ sum+=$1 } END { print sum }'
rm /tmp/2_5.txt
