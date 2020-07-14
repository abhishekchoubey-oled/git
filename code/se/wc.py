'''
Web Crawler
'''

alink = """a class="Fx4vi" href="//google.com/search/howsearchworks/?fg=1">  How Search works </a>"""
anchor_tag_start="<a"
anchor_tag_end="</a>"

def get_link(link) :
	href_pos = link.find("href")
	start = link.find('"', href_pos) + 1
	end = link.find('"', start + 1)
	return link[start : end]

print get_link(alink)
