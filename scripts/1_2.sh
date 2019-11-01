#!/bin/bash
find ~ -maxdepth 1 -type f -regex ".*\.\(txt\)" | wc -l
