% Noman Javed(2020-ag- ----) and Ahmad Sultan(2020-ag-6374)




 %E1 Q1 
X = [1 2 3 4; 1 2 3 4; 1 2 3 4; 1 2 3 4]

X =

     1     2     3     4
     1     2     3     4
     1     2     3     4
     1     2     3     4
%E1 Q2  transpose of X
X'

ans =

     1     1     1     1
     2     2     2     2
     3     3     3     3
     4     4     4     4
     
%E1 Q3  with each element of  X

X.^2

ans =

     1     4     9    16
     1     4     9    16
     1     4     9    16
     1     4     9    16

 %E1 Q4  multiply 3 with each element of  X
     
X.^3

ans =

     1     8    27    64
     1     8    27    64
     1     8    27    64
     1     8    27    64
%E1 Q5  plus matrix A and B
A = [1 2 3 ; 1 2 3 ; 1 2 3];
B = [4 5 6 ; 4 5 6; 4 5 6];

A + B

ans =

     5     7     9
     5     7     9
     5     7     9
%E1 Q6  multiply matrix A and B
A * B

ans =

    24    30    36
    24    30    36
    24    30    36
%E1 Q7  Concatinating X with itself horizontally
C = [X,X]

C =

     1     2     3     4     1     2     3     4
     1     2     3     4     1     2     3     4
     1     2     3     4     1     2     3     4
     1     2     3     4     1     2     3     4
%E1 Q8  Concatinating X with itself vertically
H = [X;X]

H =

     1     2     3     4
     1     2     3     4
     1     2     3     4
     1     2     3     4
     1     2     3     4
     1     2     3     4
     1     2     3     4
     1     2     3     4
%E1 Q9  Concatinating A and B  horizontally
[A,B]

ans =

     1     2     3     4     5     6
     1     2     3     4     5     6
     1     2     3     4     5     6
%E1 Q10  Concatinating A and B  vertically
[A ; B]

ans =

     1     2     3
     1     2     3
     1     2     3
     4     5     6
     4     5     6
     4     5     6
%E2 Q1  
W = [1 2 3; 1 2 3 ; 1 2 3]

W =

     1     2     3
     1     2     3
     1     2     3

W + 3

ans =

     4     5     6
     4     5     6
     4     5     6
%E2 Q2
W'

ans =

     1     1     1
     2     2     2
     3     3     3
%E2 Q3
W.^2

ans =

     1     4     9
     1     4     9
     1     4     9
%E2 Q4
W.^3

ans =

     1     8    27
     1     8    27
     1     8    27
%E2 Q5
C = [1 2; 1 2]

C =

     1     2
     1     2

D = [1 3; 1 3]

D =

     1     3
     1     3

C + D

ans =

     2     5
     2     5
%E2 Q6
X = [ 1 2; 1 2];
Y = [3 4; 3 4]

Y =

     3     4
     3     4

X * Y

ans =

     9    12
     9    12
     %E2 Q7
W = [1 2 3; 1 2 3; 1 2 3];
C = [1 2 3; 4 5 6; 7 8 9];
D = [2 1 3; 3 45 6; 2 3 4];
X = [1 2 4 ; 5 6 7; 3 4 6];
Y = [ 3 4 5; 2 4 5; 24 6 7];
WC = [W , C]

WC =

     1     2     3     1     2     3
     1     2     3     4     5     6
     1     2     3     7     8     9

WD = [W , D]

WD =

     1     2     3     2     1     3
     1     2     3     3    45     6
     1     2     3     2     3     4

WX = [W , X]

WX =

     1     2     3     1     2     4
     1     2     3     5     6     7
     1     2     3     3     4     6

WY = [W , Y]

WY =

     1     2     3     3     4     5
     1     2     3     2     4     5
     1     2     3    24     6     7
 %E2 Q8
A = [1 2 3; 1 2 3; 124 5 7 ];
A = [1 2 3; 1 2 3; 124 5 7 ; 4 6 6; 34 4 3];
B = [1 2 3; 3 545 5; 243 5 6; 4 2 4; 35 6 7];
AB = [A , B]

AB =

     1     2     3     1     2     3
     1     2     3     3   545     5
   124     5     7   243     5     6
     4     6     6     4     2     4
    34     4     3    35     6     7
 %E2 Q9
A = [1 2 3; 1 2 3 ];
B =[1 2 3; 124 5 7 ];
AB = [A , B]
%concatenate the a and b horizontally
AB =

     1     2     3     1     2     3
     1     2     3   124     5     7
