cat /etc/passwd | grep -v '#' | sed -e '1n;N;s/*\n//' | cut -d : -f1 | rev | sort -dr | sed -n "$FT_LINE1, $FT_LINE2 p" | tr '\n' '.' 

