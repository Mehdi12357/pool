cat /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0 {print $1}' | rev | sort -r | sed -n '7,15p' | paste -sd ', ' - | sed 's/$/./'
