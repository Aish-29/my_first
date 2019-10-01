#!/bin/bash
#To store information
#Created by Aish
#Created on 1/10/19

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
echo "Hello $name bearing ID $uid in the company $cname. You have scored $mark1,$mark2,$mark3 resp. your Total is $total and Percentage is $percent"
if [ $percent -gt 75 ]
then
    echo ":: Passed!! with first class!! ::"
elif [ $percent -gt 65 -a $percent -le 75 ]
then
    echo ":: Passed! with distinction!! ::"
elif [ $percent -gt 50 -a $percent -le 65 ]
then 
    echo ":: Passed! with Second Class distinction!! ::"
else
    echo ":: you have FAILED!! ::"
fi
