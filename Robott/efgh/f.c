#define c 299792458
#include "../Header/ABCD.h"
enum det{
  m1 = 1,
  m2 = 2,
  m3 = 3, 
  m4 = 4 
}
enum trace{
    v1 = 6,
    v2 = 7,
    v3 = 8,
    v4 = 9
}
function dettrace{
     {m1*v1} = 5,
     {m2*v2} = 14,
     {m3*v3} = 24,
     {m4*v4} = 36
}
void 'f1'{
do {
'A' <- 'B' <-> 'C' <-> 'D'
(0.25f, 0.5f, 0.75f, 1.0f)
while ("scalar")

void 'f2'{
do {
'A' -> 'B' <-> 'C' <-> 'D'
(4F,3F,3F,1F)
}
while ("vector")
void 'f3'
do {
'A' <-> 'B' -> 'C' <-> 'D'
(0.25f , 0.5f , 0.75f  ,1.0f   )
* (4F ,  3F ,  3F  ,  1F )
("tensor")
}

void 'f4'
do {
'A' <-> 'B' <-> 'C' <-> 'D' -> 'e'
det (char A const B char C const D)
("mass")
void 'f(ABCDef')
do {
    'A' <-> 'B' <-> 'C' <-> 'D' <-> 'e'->'f'
    'E' = m * (c ^ 2)
while ("energy")
}