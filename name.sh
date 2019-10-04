#!/bin/bash
#To store information
#Created by Aish
#Created on 1/10/19

ans="y"
while [ $ans = "y" -o $ans = "Y" ]
do
    echo "Enter your ID:: "
    read uid
    echo "Enter your name:: "
    read name
    echo "Enter your Company's Name:: "
    read cname
    echo "Enter the marks you scored in 3 subjects:: "
    read mark1
    read mark2
    read mark3
    total=`expr $mark1 + $mark2 + $mark3`
    percent=`expr $total / 3`
    if [ $percent -gt 75 ]
    then
    grad="Grade A"
    elif [ $percent -gt 65 -a $percent -le 75 ]
    then
    grad="Grade B" 
    elif [ $percent -gt 50 -a $percent -le 65 ]
    then 
    grad="Grade C" 
    else
    grad="Grade F" 
    fi

    echo "$uid $name $cname $mark1 $mark2 $mark3 $total $percent $grad" >>emprc
echo "Do you want to Continue! y/Y::"
read ans
done
