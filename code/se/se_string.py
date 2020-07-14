def se_find_str(src_str, qstr) :
	return src_str.find(qstr) 

def se_extract_str(src_str, qstr) :
	sub_str_pos = se_find_str(src_str, qstr)
	new_str = src_str[sub_str_pos:]
	white_space_pos = se_find_str(new_str, ' ')
	print white_space_pos
	sub_str = new_str[0: white_space_pos]
	return sub_str


str = "A quick brown fox jumped over a little lazy dog"

print(se_find_str(str, "quick"))
print(se_extract_str(str, "quick"))
print(se_extract_str(str, "brown"))
print(se_extract_str(str, "fox"))


print str.find('quick', 10) # print first occurence of 'quick' after index 10
