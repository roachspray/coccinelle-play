
In FreeBSD kernel, one can specify if a dynamic memory allocation request is
to sleep and wait for the memory to be available (if not already) or if it
should return NULL immediately. The former case does not require a return
value check as it is guaranteed to provide the memory, if it returns. In the
kernel, however, there are many cases of checking return value on the 
`M_WAITOK` case ... this is not needed and should be removed to reduce
clutter and improve the readability and.... other reasons :P

I include my first gen semantic patch and then the 2nd gen, which is much
better. I still needed to go through and find some other cases, but it really
worked well and commits are happening. Thanks to Mark Johnston of FreeBSD
for wading through the mess and getting the commits in.

See [pr 240545](https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=240545).

- `nool-old.cocci` is the old, 1st version that takes forever... I was new :P
- `nool.cocci` is the one used to generate the main diff being committed and
still probably could be improved, but it worked for me. (hopefuly this is the
right one b/c I am putting this into rcs long after i wrote it).

Also here is the generated diff.

