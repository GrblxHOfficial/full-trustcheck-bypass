# full-trustcheck-bypass
you need to intiliaze the memcheck bypass before trustcheck
# how to update
trustcheck_1:
search for string 'Trust check failed', find jnz address showed in image:
![image](https://user-images.githubusercontent.com/107208086/223353103-738f649a-58ad-4773-98e3-cf6c4f078483.png)

trustcheck_2:
search for string 'HttpRequest.Url is not trusted', and its xref is the addy
![image](https://user-images.githubusercontent.com/107208086/223353482-4b994eac-9bc4-414b-a51b-71b05df6559b.png)
