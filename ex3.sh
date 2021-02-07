#!/bin/bash
FILE=./ex3files/web.out #saves the webpage in this file
LOG=./ex3files/log.txt #contains the output log  
URL=http://www.iiitdm.ac.in # website being tested
RESULT=./ex3files/result.txt # stores the time alone

startTime=`date`
echo "START-------------------------------------------------" >> $FILE
echo "" >> $FILE
time(curl --connect-timeout 100 $URL) >> $FILE 2>> $LOG
echo "" >> $FILE
endTime=`date`
echo "startTime: $startTime" >> $FILE >> $LOG
echo "endTime: $endTime" >> $FILE >> $LOG
echo "" >> $FILE >> $LOG

grep 'real\|startTime' ./ex3files/log.txt > $RESULT
