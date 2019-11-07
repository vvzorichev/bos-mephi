#!/bin/bash
grep -A "$3" "$1" "$2" | nl -b p"$1" 
