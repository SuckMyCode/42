ldapsearch -LLL -Q "uid=z*" cn | grep "^cn:" | sort -r | cut -c 5-
