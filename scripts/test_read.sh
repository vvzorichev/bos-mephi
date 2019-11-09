#!/bin/bash
while [ 1 ]
do
	read STRING < ~/fifo1
	echo "$STRING"
	sleep 1
done
