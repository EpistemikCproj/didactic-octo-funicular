#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define p void
#define   a sizeof
#define      l char
#define        i return
#define          n int
#define           d size_t
#define            r if
#define             o while
#define              m else
#define              e for
#define              ob putchar
#define              fu strlen
#define             sc isalpha
#define             at tolower
#define            ed fgets
#define          cp printf
#define        ro strchr
#define     gr main
#define am stdin
n c(l*s){n k=
0;r(s){d x
=fu (s)
;r(x>1)
{l*t=s,
*u=s+x-
1;k=1;o
(k&&t<u
){r(sc(
*t)){r(
sc(*u))

    {r(at(
   *t)!=at(
  *u)    ){k
 =0;      }m{
++t;--u;}}m{--
u;}}m{++t;}}}}
i k        ;}n
gr(        p){
l b        [01
<<1        <<1

<<1
<<1
<<1
<<1
<<1
<<1
<<1
],*
z,*s=" adeil"
"mnoprst.\n";

n f[]={00,01<<1
<<1,(1<<1<<1<<1
      )|(
      1<<
      1)|
      1},
      v[]
      ={0
,(1<<1<<1)|(1<<
1)|1,1<<1<<1<<1


,(1         <<1
<<01        <<1
)|(01       <<1
<<1 )}      ,q[
]={  (1     <<1
)&1   ,1    <<1
>>1    ,1   >>1
,(1     <<  1<<
1<<      1) |1,
1<<       01<<1


>>1>>1,(1<<1
<<1       )|(
1<<        1>>
1),         1<<
1<<         1,(
1<<         1<<
1)|         (01
<<1        )|1
,01       <<1
,(1<<1<<1<<1


)|(1<<01),1
<<1      <<1
<<1       ,(1
<<1       <<1
)|1      <<1
,(1   <<1
)|1,(1<<
1<<   1<<
1)|    (01
<<1     <<1
)|1      ,(1
<<1       <<1


   <<1)|(1<<
 1<<       1)|
(01         <<1
)};         d y
;o(         ed(
b,a         (b)
,am         )){
{z=         ro(
 b,1        *1*
   '\n');}if(

z){          *z=
00;}        {cp(
"%s",      b);}e
(y=0;1    *y<a f
/a( 1[f  ]); y++
)ob  (y[f][  s])
;r(   !c(b   ))e
(y=    0;    y<a
v/a          1[v
];y          ++)


ob(01*y[v][s]);e
(y=0/1*1/1<<1<<1
<<1
;y<
a q
/a 1[q]
;y++)ob
(y[
q][
s])
;}i 0>>1<<0>>1<<
1*1/(1<<1<<01);}

