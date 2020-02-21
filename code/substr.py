
import os

file="/tmp/file2"
print os.path.exists(file)
fh = open(file, 'r') 
for line in fh :
	line = line.strip()
	print line
