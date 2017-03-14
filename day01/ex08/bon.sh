ldapsearch -Q 'sn=*bon*' sn | grep -v '#' | grep 'sn' | wc -l | sed 's/ //g'
