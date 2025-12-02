??= include<stdio.h>
int
%: define Z(...) __VA_ARGS__
Z(main( void ))
#define AAAA "\n"
<%
%: define D(a) a %:%: a 
Z(const)
??=define P printf
char 
??=define A &
msg 
#define S(s) A s??(0??)
??(14??) = "Hello"
","
??=define Q(x) #x
??/
#define AA "%s"
" ";
%: define M(a, b) a,b
P(D(A) D(A) D(AA), M(S(msg), Q(world!))); ??>
