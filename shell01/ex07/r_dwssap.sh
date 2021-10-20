cat /etc/passwd | grep "*#*" | sed -n "n;p" | cut -d : -f 1 | rev | head -n $FT_LINE2 | tail -n $(expr $FT_LINE2 - $FT_LINE1) | tr '\n' '+' | sed  "s/+/, /g" | sed "s/, $/./g"
