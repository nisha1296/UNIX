#!/bin/sh
#echo "Print the threshold value: "
#read threshold
threshold=2750
avail=`free -m|grep "Mem"|awk '{print $7}'`
echo $avail
if [ $threshold -gt $avail ]
then
  echo "Warning -- RAM Usage crossed threshold"
  echo "What do you want to do?"
  echo "1. Task Manager."
  echo "2. View the processes consuming most memory."
  echo "3. Kill a process."
  echo ""
  stty -echo
  read ans
  stty echo
  if [ $ans = 1 ]
  then
  gnome-system-monitor
  fi
fi  
