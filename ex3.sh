#!/bin/bash
FILE=./ex3files/web.out
LOG=./ex3files/log.txt
URL=http://www.iiitdm.ac.in
RESULT=./ex3files/result.txt

start_date=`date`
echo "START-------------------------------------------------" >> $FILE
echo "" >> $FILE
time(curl --connect-timeout 100 $URL) >> $FILE 2>> $LOG
echo "" >> $FILE
endTime=`date`
echo "startTime: $startTime" >> $FILE >> $LOG
echo "endTime: $endTime" >> $FILE >> $LOG
echo "" >> $FILE >> $LOG

grep 'real\|startTime' ./ex3files/log.txt > $RESULT
