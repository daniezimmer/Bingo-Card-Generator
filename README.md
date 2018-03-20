# Bingo-Card-Generator
### Behind the Idea?
This is a project I started to help my mother
who is a teacher in her classroom. I asked her 
if their were anything that she didn't like doing
and after a few minutes of elaboration and proding
I learned that she didn't like making vocabulary
bingo cards for her students, so I pitched a
solution where I develop a program that lets her
create a large number of different cards that she 
could print out and use with her students. I
stopped working on it when I wonderd if somebody
had already thought to make one, and learned (to
my disappointment) that they had, a lot of people
had, 

### Design:
The program was writtent in c because I was most
familiar with it at the time. I would create a simple 
interface that would prompt the user for a list of
words or short phrases, then create a 5x5 grid of 
rectangles and populate each cell, except the center
space, with a random set from the list of words. The
user could then choose between exporting as a pdf or 
png. There would also be an option to print a numbered 
list of the words so the user could cross off values
that were already used. I figured making sure everyword
would be spaced out, centered and wrapped properly 
would be the hard part especially when createing the 
pdf but when push came to shove and I envitabllly got 
fed up with pdf I figured I could just export
a pdf with the photo on it. I just wanted to create a
single multipage pdf that had as many distinct cards
as the user wanted and be able to directly print it. 
I figured printing would be hard to do as well so I
set the low tier goal to just generate a pdf.

### Extra:
* Decorative boarders,
* Direct Printing,
* separate list of questions to ask instead of the word itself,
* Optional Free Center space
* boarder importing (so the user can create custom boarders)
