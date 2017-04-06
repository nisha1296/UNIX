#!/bin/sh
threshold=2682
avail=`free -m|grep "Mem"|awk '{print $7}'`
echo $avail
if [ $threshold -gt $avail ]
then
  echo "Warning"
fi  
echo "The process which uses the most RAM: "
echo `ps aux --sort -rss|head -2|awk '{ print $11}'|tail -1`
echo `ps aux --sort -rss|head -2|awk '{ print $6}'|tail -1`
echo '\n'
#echo `ps -ax`
