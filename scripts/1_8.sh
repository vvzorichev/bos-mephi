#!/bin/bash
echo "Процессов пользователя:"
whoami
ps -x | wc -l
echo "Процессов пользователя root:"
ps -U root | wc -l
