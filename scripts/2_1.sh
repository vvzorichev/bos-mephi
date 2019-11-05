#!/bin/bash
date +"%d.%m.%y  %H:%M" >> /tmp/run.log
echo "Hello, World!"
wc -l < /tmp/run.log  >&2
