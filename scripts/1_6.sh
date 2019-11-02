#!/bin/bash
echo "Домашний каталог пользователя"
whoami
echo "Содержит обычных файлов:"
find ~ -maxdepth 1 -type f | wc -l
echo "Содержит скрытых файлов:"
find ~ -maxdepth 1 -type f -name ".*" | wc -l

