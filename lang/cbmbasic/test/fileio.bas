10 OPEN 1,1,1,"TEST.DAT"
20 PRINT#1, 1234
30 PRINT#1, "Hello"
40 CLOSE 1

50 OPEN 2,1,0,"TEST.DAT"
60 INPUT#2, A
70 INPUT#2, I$
80 CLOSE 2

90 PRINT A
100 PRINT I$